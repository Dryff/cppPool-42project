#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private :
		string name;
		Weapon*     weapon;
	public :
		HumanB(string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& newWeapon);
};

#endif