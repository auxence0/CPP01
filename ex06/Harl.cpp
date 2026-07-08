/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 11:48:24 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/08 13:58:43 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug ( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	return ;
}

void	Harl::info ( void ) {
	std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	return ;
}

void	Harl::warning ( void ) {
	std::cout <<  "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
	return ;
}

void	Harl::error ( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	return ;
}

void	Harl::complain ( std::string level ) {
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int	index_level(0);
	for (; index_level < 4; ++index_level) {
		if (level == levels[index_level])
			break ;
	}
	switch (index_level)
	{
		case 0:
			debug();
			//fallthrough
		case 1:
			info();
			//fallthrough
		case 2:
			warning();
			//fallthrough
		case 3:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
	}
}
