/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:31:05 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/07/27 17:31:05 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

void	clear_stdin(void)
{
	std::clearerr(stdin);
	std::cin.clear();
}

int	main(void)
{
	std::string	line;

	std::cout << "Welcome to Nakama Book!" << std::endl;
	while (1)
	{
		clear_stdin();
		std::cout << "Insert an option: ", std::getline(std::cin, line);
		// if (std::cin.eof())
		// 	std::cout << std::endl;
		if (line == "EXIT")
			break;
		// std::cout << line << std::endl;

	}
	std::cout << "Bye!" << std::endl;
	return (EXIT_SUCCESS);
}