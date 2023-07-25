#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap
{
private:
    FlagTrap();

public:
    FlagTrap(string name);
	FlagTrap(FlagTrap const & src);
    ~FlagTrap();

    void    attack(string const& target);
    void    highFivesGuys();

	FlagTrap &		operator=(FlagTrap const & rhs);

};



#endif 