#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap : public FlagTrap, public ScavTrap
{

	private:
		string _name;

	public:
		DiamondTrap(string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		void whoAmI();
		DiamondTrap &operator=(DiamondTrap const &rhs);
};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */