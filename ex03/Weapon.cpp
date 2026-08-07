/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:57:55 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/07 13:42:44 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type): type_(type) {
	return ;
}

const std::string&	Weapon::getType () const {
	return type_;
}

void	Weapon::setType ( std::string type ) {
	type_ = type;
}
