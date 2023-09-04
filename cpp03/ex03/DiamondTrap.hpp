#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	private:
		string _name;

	public:
		DiamondTrap();
		DiamondTrap(string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		void whoAmI();

		DiamondTrap &operator=(DiamondTrap const &rhs);
};

#endif /* ***************************************************** DIAMONDTRAP_H */