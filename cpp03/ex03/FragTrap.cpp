#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "{FragTrap} " << this->_name << " constructor called." << std::endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "{FragTrap} " << this->_name << " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) {
    *this = src;
    cout << "{FragTrap} Copy constructor called" << endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap() {
	cout << "{FragTrap} " << this->_name << " Destructor Called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


FragTrap&   FragTrap::operator=( const FragTrap& rhs ) {
    cout << "{FragTrap} " << rhs._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void    FragTrap::highFivesGuys() {
    std::cout << "{FragTrap} " << this->_name << " wants a high five " << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */