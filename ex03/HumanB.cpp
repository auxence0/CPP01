/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:00:19 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/06 12:59:05 by asauvage         ###   ########.fr       */
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
	if (weaponB_)
		std::cout << name_ << " attacks with their " << weaponB_->getType() << "\n";
	else
		std::cout << "There is no weapon\n";
}
