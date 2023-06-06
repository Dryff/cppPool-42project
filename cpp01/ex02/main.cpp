#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "Addresse de la string en mémoire :\t" << &str << endl;
	cout << "Adresse stockée dans stringPTR :\t" << stringPTR << endl;
	cout << "Adresse stockée dans stringREF :\t" << &stringREF << endl;
	cout << "-------------" << endl;
	cout << "La valeur de la string :\t\t" << str << endl;
	cout << "La valeur pointée par stringPTR :\t" << *stringPTR << endl;
	cout << "La valeur pointée par stringREF :\t" << stringREF << endl;
}