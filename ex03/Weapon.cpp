/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:54:02 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 13:39:44 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon(){}

std::string Weapon::getType(){
	return (this->type);
}

void Weapon::setType(std::string const type){
	this->type = type;
}