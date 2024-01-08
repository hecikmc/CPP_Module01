/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:22:46 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 17:07:05 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

/* void	ft_leaks(void)
{
	system("leaks -q sed");
} */

int main(int argc, char **argv){
	//atexit(ft_leaks);
	if(argc != 4)
		std::cout << "Invalid number of arguments, you must specify a file name, the original string to replace, and the target string for replacement.\n";
	else
		ft_replaceStrings(argv[1], argv[2], argv[3]);
}