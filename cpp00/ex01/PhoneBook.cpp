#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::PrintMenu(void){
	cout << "------ PHONEBOOK ------" << endl;
	cout << "ADD\t| Add a contact to PhoneBook" << endl;
	cout << "SEARCH\t| Search for a contact in the PhoneBook" << endl;
	cout << "EXIT\t| Exit PhoneBook" << endl;
	cout << "-----------------------" << endl;
}

void    PhoneBook::PrintSummary(void) {
    cout << "┌-----------┬------ SUMMARY ------┬----------┐" << endl;
    for (int i = 0; i < MAX_CONTACT; i++) {
        this->_contactList[i].displayLine(i + 1);
    }
	cout << "└-----------┴----------┴----------┴----------┘" << endl;
}

void	PhoneBook::Add(void){
	static int i;
	this->_contactList[i % MAX_CONTACT].setContact();
	this->_contactList[i % MAX_CONTACT].setIndex(i);
	i++;
}

void PhoneBook::initContact() {
	for (int i = 0; i < MAX_CONTACT; i++) {
		this->_contactList[i].initContactIndex();
	}
}

void	PhoneBook::Search(void){
	int index = 0;
	string input = "";
	PrintSummary();
	while (index < 1 || index > MAX_CONTACT) {
		do {
				cout << "Enter an index > ";
				getline(cin, input);
			} while (input.length() == 0 && !cin.eof());
		if (cin.eof())
			return ;
		if (is_only_digits(input)) {
			std::istringstream(input) >> index;
		}
		if (index < 1 || index > MAX_CONTACT)
			cout << "Invalid Index" << endl;
	}
	if (_contactList[index - 1].contactExists())
		_contactList[index - 1].printContactInfos(index);
	else
		cout << "Contact [" << index << "] has not been attributed" << endl;
}
