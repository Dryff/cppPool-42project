#include "Harl.hpp"

int main(int argc, char** argv) {
	Harl harl;
	if (argc == 1) {
		cout << "Invalid number of arguments." << endl;
		return (1);
	}
	string input = string(argv[1]);
	if (!input.compare("DEBUG") || !input.compare("WARNING") || !input.compare("INFO") || !input.compare("ERROR"))
		harl.complain(input);
	else {
		cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}