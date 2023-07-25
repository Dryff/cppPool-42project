#include "FlagTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FlagTrap::FlagTrap(string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "{FlagTrap} " << this->_name << " constructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FlagTrap::~FlagTrap() {
	cout << "{FlagTrap} " << this->_name << " Destructor Called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


FlagTrap&   FlagTrap::operator=( const FlagTrap& rhs ) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "{FlagTrap}" << this->_name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void FlagTrap::attack(const string &target) {
	this->_energyPoints -= 1;
	cout << "{FlagTrap} " << this->_name << " attacked " << target << " causing " << this->_attackDamage << " points of damage." << endl;
}

void    FlagTrap::highFivesGuys() {
    std::cout << "{FlagTrap} " << this->_name << " wants a high five " << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */