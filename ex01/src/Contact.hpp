#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:

	public:
		std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
		Contact();
		~Contact();
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNicktName(std::string nickName);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);

};

#endif