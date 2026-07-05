/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:54:55 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:32:06 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {
	public:
		HumanB	( std::string name );
		void	setWeapon ( Weapon& weapon );
		void	attack ();
	private:
		Weapon*		weaponB_;
		std::string	name_;
};

#endif