#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {
	ClapTrap Jinx("Jinx");
	ScavTrap Yone("Yone");
	ClapTrap Yasuo("Yasuo");
	FlagTrap Heyo("Heyo");

	Jinx.attack("Yasuo");
	Yone.attack("jinx");
	Heyo.attack("Yone");
	Yasuo.takeDamage(25);
	Yasuo.beRepaired(10);
	Yone.guardGate();
	Heyo.highFivesGuys();
}