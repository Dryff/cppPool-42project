#include "ClapTrap.hpp"

int main() {
	ClapTrap Jinx("Jinx");
	ClapTrap Yasuo("Yasuo");

	Jinx.attack("Yasuo");
	Yasuo.beRepaired(10);
	Yasuo.takeDamage(25);
	Yasuo.beRepaired(10);
	Yasuo.takeDamage(25);
}