#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << ">DiamondTrap< " << this->_name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    
    std::cout << ">DiamondTrap< " << this->_name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) {
    *this = src;
    cout << ">DiamondTrap< Copy constructor called" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap() {
    std::cout << ">DiamondTrap< " << this->_name << " destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap&   DiamondTrap::operator=( const DiamondTrap& rhs ) {
    cout << ">DiamondTrap< " << rhs._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return *this;
}

// std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void    DiamondTrap::whoAmI() {
    std::cout << ">DiamondTrap< I am " << this->_name << ", my ClapTrap name is " << ClapTrap::_name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */