/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:51:56 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/08/03 16:51:56 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/*
* CONSTRUCTOR
*/
PhoneBook::PhoneBook()
{
	this->line = "";
	this->index_new_contact = 0;
}

/*
* DESTRUCTOR
*/
PhoneBook::~PhoneBook()
{
}

/*
* prompt: Show options to the user choose between ADD, SEARCH and EXIT.
* ADD: Add a new contact.
* SEARCH: Show all the contacts and choose a contact
*/
void	PhoneBook::prompt(void)
{
	std::cout << "Welcome to Nakama Book!" << std::endl;
	while (1)
	{
		std::cout << "Insert an option -> [ADD] [SEARCH] [EXIT]: ";
		this->getInput();
		if (this->line.empty())
			continue;
		else if (this->line == "EXIT")
			break;
		else if (this->line == "ADD")
			this->addNewContact();
		else if (this->line == "SEARCH")
			this->searchContact();
		else
			std::cout << "Invalid option" << std::endl;

	}
	std::cout << "Bye!" << std::endl;
}

void	PhoneBook::getInput(void)
{
	this->clearLine();
	std::getline(std::cin, this->line);
	if (std::cin.eof())
		(std::cout << std::endl);
}

void	PhoneBook::clearLine(void)
{
	std::clearerr(stdin);
	std::cin.clear();
}


void	PhoneBook::addNewContact(void)
{
	Contact	newContact;

	if (this->index_new_contact == 8)
		this->index_new_contact = 0;
	std::cout << "First name: ";
	this->getInput();
	newContact.setFirstName(this->line);
	std::cout << "Last name: ";
	this->getInput();
	newContact.setLastName(this->line);
	std::cout << "Nickname: ";
	this->getInput();
	newContact.setNickName(this->line);
	std::cout << "Phone number: ";
	this->getInput();
	newContact.setPhoneNumber(this->line);
	std::cout << "Darkest secret: ";
	this->getInput();
	newContact.setDarkestSecret(this->line);
	if (this->isAllFilled(newContact))
	{
		this->contacts[this->index_new_contact] = newContact;
		this->index_new_contact++;
	}
	else
		std::cerr << "Error! Fields with whitespace or not filled." << std::endl;

}

void	PhoneBook::searchContact(void)
{
	this->clearLine();
}



bool	PhoneBook::isAllFilled(Contact &contact)
{
	return (!contact.firstName.empty()
		&& !contact.lastName.empty()
		&& !contact.nickName.empty()
		&& !contact.phoneNumber.empty()
		&& !contact.darkestSecret.empty());
}
