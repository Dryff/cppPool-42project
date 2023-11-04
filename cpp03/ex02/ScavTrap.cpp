#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    cout << "<ScavTrap> Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "<ScavTrap> " << this->_name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) {
    *this = src;
    cout << "<ScavTrap> Copy constructor called" << endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap() {
	cout << "<ScavTrap> " << this->_name << " Destructor Called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


ScavTrap&   ScavTrap::operator=( const ScavTrap& rhs ) {
    cout << "<ScavTrap> " << rhs._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const string &target) {
	this->_energyPoints -= 1;
	cout << "<ScavTrap> " << this->_name << " attacked " << target << " causing " << this->_attackDamage << " points of damage." << endl;
}

void    ScavTrap::guardGate() {
    std::cout << "<ScavTrap> " << this->_name << " is now in Gate keeper mode." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */