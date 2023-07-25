#include "ClapTrap.hpp"

int main() {
	ClapTrap Jinx("Jinx");
	ClapTrap Yasuo("Yasuo");

	Jinx.attack("Yasuo");
	Yasuo.takeDamage(25);
	Yasuo.beRepaired(10);
}