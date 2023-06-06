
#include "Contact.hpp"

Contact::Contact(/* args */){
}

Contact::~Contact(){
}


string Contact::getText(string str) const {
    string input = "";

    do {
			cout << str;
     		getline(cin, input);
		} while (input.length() == 0 && !cin.eof());
        return (input);
}

string Contact::getNumber(string str) const {
    string input = "";
    do {
			cout << str;
     		getline(cin, input);
		} while ((input.length() == 0 && !cin.eof()) || !is_only_digits(input));
        return (input);
}

string Contact::Trunc(string str) {
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void    Contact::setIndex(int i){
    this->index = i;
}

bool Contact::contactExists() {
    return (this->index != -1);
}

void    Contact::initContactIndex() {
    this->index = -1;
}

void    Contact::setContact(void){
    this->_firstName = getText("First name: ");
    if (cin.eof())
        return;
    this->_lastName = getText("Last name: ");
    if (cin.eof())
        return;
    this->_nickName = getText("Nickname: ");
    if (cin.eof())
        return;
    this->_phoneNumber = getNumber("Phone number: ");
    if (cin.eof())
        return;
    this->_darkestSecret = getText("Darkest secret: ");
}

void    Contact::displayLine(int index) {
    cout << "|" << std::setw(5) << index << "." << std::setw(6);
    cout << "|" << std::setw(10) << Trunc(this->_firstName);
    cout << "|" << std::setw(10) << Trunc(this->_lastName);
    cout << "|" << std::setw(10) << Trunc(this->_nickName);
    cout << "|" << endl;
}

void    Contact::printContactInfos(int index) {
    cout << "---------- CONTACT [" << index << "] ----------" << endl;
    cout << "First name :\t\t" << this->_firstName << endl;
    cout << "Last name :\t\t" << this->_lastName << endl;
    cout << "Nickname :\t\t" << this->_lastName << endl;
    cout << "Phone number :\t\t" << this->_phoneNumber << endl;
    cout << "Darkest secret :\t" << this->_darkestSecret << endl;
}