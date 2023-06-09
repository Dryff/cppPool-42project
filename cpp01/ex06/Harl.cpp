#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug() {
	cout << BLUE << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << RESET << endl;
}

void Harl::info() {
	cout << GREEN << "INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << RESET << endl;
}

void Harl::warning() {
	cout << YELLOW << "WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << endl;
}

void Harl::error() {
	cout << RED << "ERROR : This is unacceptable! I want to speak to the manager now." << RESET << endl;
}

void Harl::complain(string inputLevel) {
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(inputLevel))
		i++;
	switch (i) {
        case 0:
			debug();
        case 1:
			info();
        case 2:
			warning();
        case 3:
			error();
			break;
        default:
            std::cout << "Option invalide." << endl;
            break;
    }
}
