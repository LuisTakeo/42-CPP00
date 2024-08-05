/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:51:56 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/08/03 16:51:56 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cstdio>
# include <string>
# include <csignal>

class PhoneBook
{
	private:

	public:
		int			index_new_contact;
		Contact		contacts[8];
		std::string	line;

		PhoneBook();
		~PhoneBook();

		void	clearLine(void);
		void	getInput(std::string label);
		void	getRequiredInput(std::string label);
		void	addNewContact(void);
		void	searchContact(void);
		void	prompt(void);
		bool	isAllFilled(Contact &contact);
		bool	isOnlySpace(std::string str);
};



#endif
