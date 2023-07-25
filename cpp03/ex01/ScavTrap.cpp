#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "<ScavTrap> " << this->_name << " constructor called." << std::endl;
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
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "<ScavTrap> " << this->_name << " has been copied with copy assignment operator." << std::endl;
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