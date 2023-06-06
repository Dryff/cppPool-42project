#include "Harl.hpp"

int main() {
	Harl harl;
	string input;
	do
	{
		cout << "Levels : DEBUG, INFO, WARNING, ERROR (type 'exit' to exit)" << endl;
		cout << "Enter a level :> ";
		cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));
}