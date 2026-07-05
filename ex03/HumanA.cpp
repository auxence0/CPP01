/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:15:58 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:50:23 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon& weapon ): name_(name), weaponA_(weapon) {
	return ;
}

void	HumanA::attack () {
	std::cout << name_ << " attacks with their " << weaponA_.getType() << "\n";
}
