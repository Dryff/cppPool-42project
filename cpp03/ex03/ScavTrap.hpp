#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    ScavTrap();

public:
    ScavTrap(string name);
	ScavTrap(ScavTrap const & src);
    ~ScavTrap();

    void    attack(string const& target);
    void    guardGate();

	ScavTrap &		operator=(ScavTrap const & rhs);

};



#endif 