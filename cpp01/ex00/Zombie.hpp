#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

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
	Zombie(string name);
	~Zombie();
	void announce();
	Zombie *newZombie(string name);
	void randomChump(string name);
	void initName(string name);
};

#endif