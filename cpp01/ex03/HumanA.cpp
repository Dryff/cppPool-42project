#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	cout << this->name << " attacks with their " << this->weapon.getType()
	<< endl;
}