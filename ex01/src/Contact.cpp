/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:51:32 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/08/03 16:51:32 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact() { }

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void)
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;

}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

void	Contact::printData(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
