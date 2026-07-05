/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:13:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 17:25:15 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () {
	return ;
}

Zombie::~Zombie () {
	std::cout << "Zombie: " << name << " Destructor\n";
	return ;
}

void	Zombie::announce () {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}

void	Zombie::set_name ( std::string init_name ) {
	name = init_name;
	return ;
}
