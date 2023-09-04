#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() :_name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	cout << "[ClapTrap] Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	cout << "[ClapTrap] " << this->_name << " constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) {
	*this = src;
	cout << "[ClapTrap] Copy constructor called" << endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap() {
	cout << "[ClapTrap] " << this->_name <<  " Destructor Called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    cout << "[ClapTrap] " << rhs._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const string &target) {
	this->_energyPoints -= 1;
	cout << "[ClapTrap] " << this->_name << " attacked " << target << " causing " << this->_attackDamage << " points of damage." << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0){
		cout << this->_name << " is already dead." << endl;
		return;
	}
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
	cout << this->_name << " repairs himself " << amount << " Hitpoints." << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		cout << this->_name << " is already dead." << endl;
		return;
	}
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