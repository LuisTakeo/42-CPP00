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
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

Contact::~Contact() { }


void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;

}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void	Contact::printData(void)
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickName << std::endl;
	std::cout << "Phone: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}
