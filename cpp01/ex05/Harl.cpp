#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug() {
	cout << "debug : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << endl;
}

void Harl::info() {
	cout << "info : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
}

void Harl::warning() {
	cout << "warning : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error() {
	cout << "error : This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string inputLevel) {
	t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(inputLevel))
		i++;
	if (i < 4) {
		cout << "------" << endl;
		(this->*funcs[i])();
		cout << "------" << endl;
	}
}
