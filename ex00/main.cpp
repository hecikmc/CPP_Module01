/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:51:56 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/29 14:47:30 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie firstZombie = Zombie();
	firstZombie.setName("Primero");
	firstZombie.announce();
	std::cout << "\n";
	
	Zombie* secondZombie = newZombie("Segundo");
	secondZombie->announce();
	//secondZombie->~Zombie();
	delete secondZombie;
	std::cout << "\n";
	randomChump("TheWalkingDeath");
	std::cout << "\n";
	return (0);
}