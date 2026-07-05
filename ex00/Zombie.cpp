/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:25:49 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:12:46 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string name ): name_(name) {
	return ;
}

Zombie::~Zombie () {
	std::cout << "Zombie: " << name_ << " Destructor\n";
	return ;
}

void	Zombie::announce () {
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
