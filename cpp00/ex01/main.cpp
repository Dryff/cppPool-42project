#include <iostream>
#include "PhoneBook.hpp"

bool is_only_digits(const string &str) {
	return (str.find_first_not_of("0123456789") == string::npos);
}

int main() {
	PhoneBook phoneBook;

	string cmd;
	phoneBook.initContact();
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("ADD") == 0)
			phoneBook.Add();
		else if (cmd.compare("SEARCH") == 0)
			phoneBook.Search();
		if (cin.eof())
			return (cout << endl << endl << "Exiting phoneBook.." << endl, 1);
		phoneBook.PrintMenu();
		do {
			cout << "Enter a command > ";
     		getline(cin, cmd);
		} while (cmd.length() == 0 && !cin.eof());
		if (cmd.compare("EXIT") && cmd.compare("ADD") && cmd.compare("SEARCH") && !cin.eof())
			cout << "error: Invalid command." << endl;
	}
	cout << endl << "Exiting phoneBook.." << endl;
}