/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 15:34:14 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 16:47:09 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie{
	public:
		Zombie(std::string set_name);
		~Zombie();
		void	announce( void );
	private:
		std::string	name;
};

Zombie*	newZombie ( std::string name );
void	randomChump ( std::string name );

#endif