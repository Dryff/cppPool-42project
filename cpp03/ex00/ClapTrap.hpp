#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

class ClapTrap
{
	private:
		string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:

		ClapTrap(string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		void attack(const string& target);
		void takeDamage(int amount);
		void beRepaired(int amount);

		// ClapTrap &		operator=(ClapTrap const & rhs);
};

// std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */