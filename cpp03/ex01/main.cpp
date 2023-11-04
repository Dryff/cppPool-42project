#include "ScavTrap.hpp"

int main() {
	ClapTrap Clap1("Clap1");
	ScavTrap Scav("Scav");
	ClapTrap Clap2("Clap2");

	Clap1.attack("Clap2");
	Scav.attack("Clap1");
	Clap2.takeDamage(25);
	Clap2.beRepaired(10);
	Scav.guardGate();
}