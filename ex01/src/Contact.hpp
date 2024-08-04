/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:51:43 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/08/03 16:51:43 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:

	public:
		std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

		Contact();
		~Contact();

		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhoneNumber(std::string phoneNumber);
		void	setDarkestSecret(std::string darkestSecret);
		void	printData(void);

};

#endif