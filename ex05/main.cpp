/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:17:20 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 17:42:41 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){
	Harl harl;
	//esto no hace nada ya que no se corresponde a ningun nivel
	harl.complain("NADA");
	//esto escribe un mensaje de nivel DEBUG
	harl.complain("DEBUG");
	//esto escribe un mensaje de nivel INFO
	harl.complain("INFO");
	//esto escribe un mensaje de nivel WARNING
	harl.complain("WARNING");
	//esto escribe un mensaje de nivel ERROR
	harl.complain("ERROR");
	return (0);
}