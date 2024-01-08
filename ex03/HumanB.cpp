/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:42:35 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 13:55:31 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string myName): name(myName), weapon(NULL){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &myWeapon){
	this->weapon = &myWeapon;
}

void HumanB::attack(){
	if (!this->weapon)
		std::cout << this->name << " don't have a weapon to attack!" << "\n";
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}