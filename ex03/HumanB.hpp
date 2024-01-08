/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:42:42 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 13:51:56 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string myName);
		~HumanB();
		void attack();
		void setWeapon(Weapon &myWeapon);
};

#endif