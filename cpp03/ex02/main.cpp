#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {
	ClapTrap Jinx("Jinx");
	ClapTrap Yasuo("Yasuo");
	ScavTrap Yone("Yone");
	FlagTrap Heyo("Heyo");

	Jinx.attack("Yasuo");
	Yone.attack("jinx");
	Heyo.attack("Yone");
	Yasuo.takeDamage(25);
	Yasuo.beRepaired(10);
	Yone.guardGate();
	Heyo.highFivesGuys();
}