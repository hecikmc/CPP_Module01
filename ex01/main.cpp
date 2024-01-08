/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:51:56 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/29 15:08:45 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* void	ft_leaks(void)
{
	system("leaks zombie");
} */

int	main(void){
	//atexit(ft_leaks);
	Zombie* zombies = zombieHorde(4, "Jessik");
	for(int i = 0; i < 4; i++){
		zombies[i].announce();
		std::cout << std::endl;
	}
	delete[] zombies;
	return (0);
}