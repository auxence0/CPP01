/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:13:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:14:30 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () {
	return ;
}

Zombie::~Zombie () {
	std::cout << "Zombie: " << name_ << " Destructor\n";
	return ;
}

void	Zombie::announce () {
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}

void	Zombie::set_name ( std::string name ) {
	name_ = name;
	return ;
}
