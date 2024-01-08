/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:14:56 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/29 15:34:14 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* void	ft_leaks(void)
{
	system("leaks hiBrain");
} */

int	main(void){
	//atexit(ft_leaks);
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "MEMORY ADRESS of the string var: " << &string << std::endl;
	std::cout << "MEMORY ADRESS of the pointer: " << &stringPTR << std::endl;
	std::cout << "MEMORY ADRESS pointed by the pointer: " << stringPTR << std::endl;
	std::cout << "MEMORY ADRESS of the reference: " << &stringREF << std::endl;

	std::cout << "\n\n";

	std::cout << "VALUE of the string var: " << string << std::endl;
	std::cout << "VALUE of the pointer: " << *stringPTR << std::endl;
	std::cout << "VALUE of the reference: " << stringREF << std::endl;
}