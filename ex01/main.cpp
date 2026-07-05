/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:51 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 17:32:34 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main () {
	Zombie*	zombardinhos;
	Zombie*	zomblia;

	zombardinhos = zombieHorde(7, "Tahane");
	for (int i = 0; i < 7; ++i)
		zombardinhos[i].announce();
	zomblia = zombieHorde(14, "GMT");
	for (int i = 0; i < 14; ++i)
		zomblia[i].announce();
	delete[] zombardinhos;
	delete[] zomblia;
}
