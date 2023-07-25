#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), FlagTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    
    FlagTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FlagTrap::_attackDamage = 30;
    
    std::cout << ">DiamondTrap< " << this->_name << " constructed." << std::endl;
}



void    DiamondTrap::whoAmI( void ) {
    std::cout << ">DiamondTrap< I am " << this->_name << ", my ClapTrap name is " << ClapTrap::_name << std::endl;
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

// DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */