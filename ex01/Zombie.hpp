/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:54:00 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/29 17:56:14 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void setName(std::string const name);
		void announce( void );

		
};

Zombie* zombieHorde( int N, std::string name );

#endif