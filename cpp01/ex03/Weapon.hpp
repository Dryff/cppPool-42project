#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

class Weapon {
	private :
		string type;
	public :
		Weapon(string type);
		~Weapon();
		const string& getType();
		void setType(string newType);
};

#endif