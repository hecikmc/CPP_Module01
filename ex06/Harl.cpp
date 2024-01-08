/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:18:18 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 18:52:57 by jmerchan         ###   ########.fr       */
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
	void	(Harl::*function[4])(void);
	
	function[0] = &Harl::debug;
	function[1] = &Harl::info;
	function[2] = &Harl::warning;
	function[3] = &Harl::error;

	for(int i = 0; i < 4; i++){
		if (levels[i] == level)
			(this->*function[i])();
	}
}

void	Harl::filterLevel( std::string levelFilter){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	type = 0;
	for(int i = 0; i < 4; i++){
		if (levels[i] == levelFilter)
			break ;
		type++;
	}
	switch (type){
		case 0:
			this->complain("DEBUG");
		case 1:
			this->complain("INFO");
		case 2:
			this->complain("WARNING");
		case 3:
			this->complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}