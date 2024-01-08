/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:17:20 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 18:52:07 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl harl;
	if (argc == 2){
		harl.filterLevel(argv[1]);
	}
	else
		std::cout << "You have to indicate one filter:\n./harlFilter DEBUG, INFO, WARNING, ERROR.\n";
	return (0);
}