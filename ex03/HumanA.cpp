/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:59:31 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 13:30:35 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string myName, Weapon &myWeapon): name(myName), weapon(myWeapon){
	/* ¿Por qué no funciona esto???!!! 
	this->name = myname;
	this->weapon = Weapon();
	this->weapon = weaponRef; */
}

HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}

