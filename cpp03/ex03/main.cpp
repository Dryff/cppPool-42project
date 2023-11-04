#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	ClapTrap Clap1("Clap1");
	ClapTrap Clap2("Clap2");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");
	DiamondTrap Dia("dia");

	Clap1.attack("Clap");
	Scav.attack("Clap1");
	Frag.attack("Scav");
	Clap2.takeDamage(25);
	Clap2.beRepaired(10);
	Scav.guardGate();
	Frag.highFivesGuys();
	Dia.whoAmI();
	Dia.attack("Scav");
}