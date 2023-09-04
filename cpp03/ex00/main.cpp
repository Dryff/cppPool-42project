#include "ClapTrap.hpp"

int main() {
	ClapTrap clap1("clap1");
	ClapTrap clap2("clap2");

	clap1.attack("clap2");
	clap2.beRepaired(10);
	clap2.takeDamage(25);
	clap2.beRepaired(10);
	clap2.takeDamage(25);
}