/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:18:57 by jmerchan          #+#    #+#             */
/*   Updated: 2024/01/02 18:49:23 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
# include <iostream>

//Colores
# define GRAY		"\033[30;1m"
# define RED		"\033[31;1m"
# define GREEN		"\033[32;1m"
# define YELLOW		"\033[33;1m"
# define DEFAULT	"\033[0m"

//Mensajes
# define DEBUG		"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger.\nI really do!\n"
# define INFO		"[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
# define WARNING	"[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n"
# define ERROR		"[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"

class Harl{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
		void filterLevel( std::string levelFilter );
};



#endif