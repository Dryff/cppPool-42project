#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) {
	*this = src;
	cout << "Copy constructor called" << endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap() {
	cout << "Destructor Called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ClapTrap &				ClapTrap::operator=(ClapTrap const & rhs)
// {
// 	// if ( this != &rhs )
// 	// {
// 	// 	this->_value = rhs.getValue();
// 	// }
// 	// return *this;
// }

// std::ostream &			operator<<(std::ostream & o, ClapTrap const & i)
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const string &target) {
	this->_energyPoints -= 1;
	cout << this->_name << " attacked " << target << " causing " << this->_attackDamage << " points of damage." << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0)
		return;
	this->_energyPoints -= 1;
	cout << this->_name << " repairs himself " << amount << " Hitpoints." << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		cout << this->_name << " is already dead." << endl;
		return;
	}
	cout << "hp : "<< _hitPoints;
	if (_hitPoints >= amount)
		cout << "[ClapTrap] " << this->_name << " was attacked and lost " << amount << " Hitpoints." << endl;
	else {
		cout << "[ClapTrap] " << this->_name << " was attacked, lost " << amount << " Hitpoints and died." << endl;
		_hitPoints = 0;
		return;
	}
	_hitPoints -= amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */