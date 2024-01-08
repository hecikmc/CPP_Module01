/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:55:53 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/29 15:05:02 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie* zombies = new Zombie[N];
	int	i = 0;

	while(i < N){
		zombies[i].setName(name);
		i++;
	}
	return (zombies);
}