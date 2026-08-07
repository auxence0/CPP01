/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 11:39:49 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/07 14:09:42 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	abrevoir;

	abrevoir.complain("DEBUG");
	abrevoir.complain("INFO");
	abrevoir.complain("ERROR");
	abrevoir.complain("WARNING");
}
