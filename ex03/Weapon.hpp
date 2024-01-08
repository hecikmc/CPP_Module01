/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:55:18 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 13:39:38 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string const type);
};

#endif