/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:00:33 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 17:23:25 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie {
	public:
		Zombie();
		~Zombie();
		void	set_name( std::string init_name);
		void	announce( void );
	private:
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif