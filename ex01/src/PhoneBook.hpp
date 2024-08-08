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
# include <iomanip>
# include <cstdio>
# include <string>
# include <csignal>
# include <cstdlib>

class PhoneBook
{
	private:
		int			index_new_contact;
		Contact		contacts[8];
		std::string	line;

		// Commands
		void	addNewContact(void);
		void	searchContact(void);

		// Inputs
		void	getInput(std::string label);
		void	getRequiredInput(std::string label);

		// Displays
		void	displayContacts(void);
		void	printContact(Contact contact, int index);
		void	printFormat(std::string str);

		// Utils
		void	clearLine(void);

		// Validations
		bool	isAllFilled(Contact &contact);
		bool	isOnlySpace(std::string str);
		bool	isPhoneNumber(std::string str);

	public:

		PhoneBook();
		~PhoneBook();
		void	prompt(void);

};



#endif
