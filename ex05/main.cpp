/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 11:39:49 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/08 11:41:02 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	abrevoir;

	abrevoir.complain("debug");
	abrevoir.complain("info");
	abrevoir.complain("error");
	abrevoir.complain("warning");
}
