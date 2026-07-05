/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:45:48 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 16:52:01 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main () {
	randomChump("Zombite");

	Zombie*	zomb = newZombie("Zombheaper");
	zomb->announce();
	delete zomb;
}
