#include "Weapon.hpp"

Weapon::Weapon(string type) {
	this->type = type;
}

Weapon::~Weapon() {

}

string& Weapon::getType() {
  	return this->type;
}

void Weapon::setType(string newType) {
	this->type = newType; 
}
