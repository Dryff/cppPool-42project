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
	protected:
    string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;


	public:

    	ClapTrap();
		ClapTrap(string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		void attack(const string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &		operator=(ClapTrap const & rhs);
};


#endif /* ******************************************************** CLAPTRAP_H */