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
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phoneBook;

	phoneBook.prompt();
	return (EXIT_SUCCESS);
}