/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:41:56 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 17:07:53 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <fstream>
#include <sstream>

void	ft_replaceStrings(std::string fileName, std::string s1, std::string s2){
	std::string content;
	std::fstream file(fileName, std::ios::in);
	
	if (!file.is_open())
		std::cout << "The file doesn't exists or you don't have read permissions.\n";
	else {
		std::stringstream buffer;
        buffer << file.rdbuf();
        content = buffer.str();
		for(size_t i = 0; content[i]; i++){
			i = content.find(s1, i);
			// si no se localiza la subcadena la función find devuelve un valor especial 
			// que se representa como 'std::string::npos' generalmente se define como
			// el valor máximo posible para el tipo size_t, también se podría controlar con
			// if i > content.size()
			if (i == std::string::npos)
				break;
			content.erase(i, s1.size());
			content.insert(i, s2);
		}
		file.close();
		std::fstream file(fileName + ".replace", std::ios::out);
		(file) << content << std::endl;
		file.close();
	}
}