/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:59:39 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 13:30:43 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA{
	protected:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string myName, Weapon &myWeapon);
		~HumanA();
		void attack();
};

#endif