#include "HumanB.hpp"

HumanB::HumanB(string name) :name(name), weapon(NULL) {
}

HumanB::~HumanB() {
}

void	HumanB::attack() {
	if (this->weapon != NULL)
		cout << this->name << " attacks with their " << this->weapon->getType() << endl;
	else {
		cout << this->name << " is bare-handed " << endl;
	}
}

void	HumanB::setWeapon(Weapon& newWeapon) {
	this->weapon = &newWeapon;
}