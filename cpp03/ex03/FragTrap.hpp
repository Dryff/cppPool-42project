#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(string name);
	FragTrap(FragTrap const & src);
    ~FragTrap();

    void    highFivesGuys();

	FragTrap &		operator=(FragTrap const & rhs);

};



#endif 