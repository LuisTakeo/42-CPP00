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
	this->_line = "";
	this->_index_new_contact = 0;
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
* EXIT: Close the program and lose all the contacts
*/

void	PhoneBook::prompt(void)
{
	std::signal(SIGINT, SIG_IGN);
	std::cout << "Welcome to Nakama Book!" << std::endl;
	while (1)
	{
		this->getInput("Insert an option -> [ADD] [SEARCH] [EXIT]: ");
		if (this->_line.empty())
			continue;
		else if (this->_line == "EXIT")
			break;
		else if (this->_line == "ADD")
			this->addNewContact();
		else if (this->_line == "SEARCH")
			this->searchContact();
		else
			std::cout << "Invalid option" << std::endl;

	}
	std::cout << "Bye!" << std::endl;
}

void	PhoneBook::addNewContact(void)
{
	Contact	newContact;

	if (this->_index_new_contact == 8)
		this->_index_new_contact = 0;
	this->getRequiredInput("First name: ");
	newContact.setFirstName(this->_line);
	this->getRequiredInput("Last name: ");
	newContact.setLastName(this->_line);
	this->getRequiredInput("Nickname: ");
	newContact.setNickName(this->_line);
	this->getRequiredInput("Phone number: ");
	newContact.setPhoneNumber(this->_line);
	this->getRequiredInput("Darkest secret: ");
	newContact.setDarkestSecret(this->_line);
	if (this->isAllFilled(newContact) && this->isPhoneNumber(newContact.getPhoneNumber()))
	{
		this->_contacts[this->_index_new_contact] = newContact;
		std::cout << "Ok! New contact added" << std::endl;
		std::cout << "Index: " << this->_index_new_contact + 1 << std::endl;
		this->_contacts[this->_index_new_contact].printData();
		this->_index_new_contact++;
	}
	else
		std::cerr << "Error! Fields not filled or PhoneNumber invalid." << std::endl;

}

void	PhoneBook::searchContact(void)
{
	int	numInput;
	this->clearLine();
	this->displayContacts();
	if (this->_contacts[0].getFirstName().empty())
		return ;
	this->getInput("Choose a nakama by Index (1 to 8): ");
	numInput = std::atoi(this->_line.c_str());
	if (numInput < 1 || numInput > 8)
	{
		std::cerr << "Invalid input" << std::endl;
		return ;
	}
	if (this->_contacts[numInput - 1].getFirstName().empty())
	{
		std::cerr<< "Not found." << std::endl;
		return ;
	}
	std::cout << "Your nakama: " << std::endl;
	this->printContact(this->_contacts[numInput - 1], numInput);
}

void	PhoneBook::printFormat(std::string str)
{
	std::string		temp;

	temp = str;
	std::cout << std::right
			<< std::setw(10)
			<< ((temp.size() > 10) ? temp.substr(0, 9) + "." : temp);
}

void	PhoneBook::printContact(Contact contact, int index)
{
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|";
	this->printFormat(contact.getFirstName());
	std::cout << "|";
	this->printFormat(contact.getLastName());
	std::cout << "|";
	this->printFormat(contact.getNickName());
	std::cout << "|" << std::endl;
}

void	PhoneBook::displayContacts(void)
{
	int	contact_size = 8;
	int	i = 0;

	if (this->_contacts[0].getFirstName().empty())
		return ;
	std::cout << "Your nakamas:" << std::endl;
	std::cout << "      Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < contact_size)
	{
		if (this->_contacts[i].getFirstName().empty())
			break ;
		this->printContact(this->_contacts[i], i + 1);
		i++;
	}
}

void	PhoneBook::getInput(std::string label)
{
	std::cout << label;
	this->clearLine();
	std::getline(std::cin, this->_line);
	if (std::cin.eof())
		(std::cout << std::endl);
}

void	PhoneBook::getRequiredInput(std::string label)
{
	while (1)
	{
		this->clearLine();
		std::cout << label;
		std::getline(std::cin, this->_line);
		if (std::cin.eof())
			(std::cout << std::endl);
		if (!_line.empty() && !this->isOnlySpace(_line))
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

bool	PhoneBook::isPhoneNumber(std::string str)
{
	for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!std::isdigit(*it))
			return (false);
	}
	return (true);
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

bool	PhoneBook::isAllFilled(Contact &contact)
{
	return (!contact.getFirstName().empty()
		&& !contact.getLastName().empty()
		&& !contact.getNickName().empty()
		&& !contact.getPhoneNumber().empty()
		&& !contact.getDarkestSecret().empty());
}
