#include "Zombie.hpp"

Zombie::Zombie(string name) {
	this->name = name;
}


Zombie::~Zombie() {
	cout << this->name << ": has been destroyed" << endl;
}

void Zombie::initName(string name) {
	this->name = name;
}

void Zombie::announce() {
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

