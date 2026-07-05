/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:00:19 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:45:38 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB ( std::string name ): weaponB_(0), name_(name) {
	return ;
}

void	HumanB::setWeapon ( Weapon& weapon) {
	weaponB_ = &weapon;
}

void	HumanB::attack () {
	std::cout << name_ << " attacks with their " << weaponB_->getType() << "\n";
}


