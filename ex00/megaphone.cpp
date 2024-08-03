/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:51:21 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/08/03 16:51:21 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <cstdlib>


void	megaphone(std::string str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}

	std::string	str;
	for (int i = 1; argv[i]; i++)
	{
		str = argv[i];
		megaphone(str);
	}
	return (0);
}