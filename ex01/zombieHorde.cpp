/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:03:04 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/05 17:32:09 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde ( int N, std::string name ) {
	Zombie*	zombards = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		zombards[i].set_name(name);
	}
	return (zombards);
}
