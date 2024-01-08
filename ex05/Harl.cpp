/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:18:18 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 18:15:23 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << GREEN DEBUG DEFAULT;
}

void	Harl::info(void)
{
	std::cout << GRAY INFO DEFAULT;
}

void	Harl::warning(void)
{
	std::cout << YELLOW WARNING DEFAULT;
}

void	Harl::error(void)
{
	std::cout << RED ERROR DEFAULT;
}


void Harl::complain( std::string level ){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < 4; i++){
		if (levels[i] == level)
			(this->*function[i])();
	}
}