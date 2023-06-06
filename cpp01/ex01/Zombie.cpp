#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	cout << this->name << ": has been destroyed" << endl;
}

void Zombie::announce() {
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name) {
	this->name = name;
}
