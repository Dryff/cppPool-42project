#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

class Zombie
{
private:
	string name;

public:
	Zombie();
	~Zombie();
	void announce();
	void setName(string name);
};

Zombie *zombieHorde(int N, string name);

#endif