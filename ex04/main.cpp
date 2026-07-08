/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:53:47 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/07 17:41:31 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main (int ac, char **av) {

	if (ac != 4)
		return (1);
	std::string		line;
	std::string		str1(av[2]);
	std::string		str2(av[3]);
	if (str2.empty())
		return (1);
	std::ifstream	infile(av[1]);
	if (!infile) {
		std::cerr << av[1] << " can't open\n";
		return (1);
	}
	std::string		replace_file = std::string(av[1]) + ".replace";
	std::ofstream	outfile(replace_file.c_str());
	if (!outfile) {
		std::cerr << replace_file << "can't open\n";
		return (1);
	}
	int				i_start(0);
	int				i_find(0);
	bool			f_line(true);

	while (getline(infile, line)) {
		if (f_line == false)
			outfile << "\n";
		while ((i_find = line.find(str1, i_start)) != -1) {
			line.erase(i_find, str1.length());
			line.insert(i_find, str2);
			i_start = i_find + str2.length();
		}
		f_line = false;
		outfile << line;
		i_start = 0;
	}
	return (0);
}
