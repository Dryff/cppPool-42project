#include "ScavTrap.hpp"

int main() {
	ClapTrap Jinx("Jinx");
	ScavTrap Yone("Yone");
	ClapTrap Yasuo("Yasuo");

	Jinx.attack("Yasuo");
	Yone.attack("jinx");
	Yasuo.takeDamage(25);
	Yasuo.beRepaired(10);
	Yone.guardGate();
}