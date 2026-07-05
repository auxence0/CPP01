/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:57:55 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:11:46 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type): type_(type) {
	return ;
}

std::string	Weapon::getType () {
	return type_;
}

void	Weapon::setType ( std::string type ) {
	type_ = type;
}
