/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:51:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 18:49:35 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	public:
		HumanA( std::string name, Weapon& weapon );
		void	attack ();
	private:
		std::string	name_;
		Weapon&		weaponA_;

};

#endif