#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACT 8

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contactList[MAX_CONTACT];
	
	public:
		PhoneBook();
		~PhoneBook();
		
		void	Add(void);
		void 	Search(void);
		void 	PrintContact(void);
		void 	PrintSummary(void);
		void	PrintMenu();
		void 	initContact();
};

bool	is_only_digits(const std::string &str);

#endif