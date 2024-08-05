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
	std::signal(SIGINT, SIG_IGN);
	std::cout << "Welcome to Nakama Book!" << std::endl;
	while (1)
	{
		this->getInput("Insert an option -> [ADD] [SEARCH] [EXIT]: ");
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
	// std::exit(EXIT_SUCCESS);
}

void	PhoneBook::getInput(std::string label)
{
	std::cout << label;
	this->clearLine();
	std::getline(std::cin, this->line);
	if (std::cin.eof())
		(std::cout << std::endl);
}

bool	PhoneBook::isOnlySpace(std::string str)
{
	int	i = 0;

	while (str[i])
	{
		if (!std::isspace(str[i]))
			return (false);
		i++;
	}
	return (true);
}

void	PhoneBook::getRequiredInput(std::string label)
{
	this->clearLine();
	while (1)
	{
		std::cout << label;
		std::getline(std::cin, this->line);
		if (std::cin.eof())
			(std::cout << std::endl);
		if (!line.empty() && !this->isOnlySpace(line))
			break ;
		std::cout << "Invalid input." << std::endl;
	}
	this->clearLine();
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
	this->getRequiredInput("First name: ");
	newContact.setFirstName(this->line);
	this->getRequiredInput("Last name: ");
	newContact.setLastName(this->line);
	this->getRequiredInput("Nickname: ");
	newContact.setNickName(this->line);
	this->getRequiredInput("Phone number: ");
	newContact.setPhoneNumber(this->line);
	this->getRequiredInput("Darkest secret: ");
	newContact.setDarkestSecret(this->line);
	if (this->isAllFilled(newContact))
	{
		this->contacts[this->index_new_contact] = newContact;
		std::cout << "New contact added" << std::endl;
		std::cout << "Index: " << this->index_new_contact << std::endl;
		this->contacts[this->index_new_contact].printData();
		this->index_new_contact++;
	}
	else
		std::cerr << "Error! Fields not filled." << std::endl;

}

void	PhoneBook::searchContact(void)
{
	this->clearLine();
	// TODO
}



bool	PhoneBook::isAllFilled(Contact &contact)
{
	return (!contact.firstName.empty()
		&& !contact.lastName.empty()
		&& !contact.nickName.empty()
		&& !contact.phoneNumber.empty()
		&& !contact.darkestSecret.empty());
}
