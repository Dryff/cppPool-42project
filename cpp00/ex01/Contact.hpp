#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

class Contact{

	private:
		string _firstName;
		string _lastName;
		string _nickName;
		string _phoneNumber;
		string _darkestSecret;
		int		index;

	public:
		Contact();
    	~Contact();
		void getContact();
		void setIndex(int i);
		void displayLine(int i);
		void printContactInfos(int i);
		bool contactExists();
		void initContactIndex();
		string Trunc(string str);
		string getInfo(string str) const;
};
#endif