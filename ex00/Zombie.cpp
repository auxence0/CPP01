/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:25:49 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 16:48:09 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string set_name ) :name(set_name) {
	return ;
}

Zombie::~Zombie () {
	std::cout << "Zombie: " << name << " Destructor\n";
	return ;
}

void	Zombie::announce () {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
