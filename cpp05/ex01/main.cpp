#include "Bureaucrat.hpp"
#include "Form.hpp"

void	printError(std::exception& e) {
	std::cout << "Error: " << e.what() << std::endl;
}

int	main() {
	Bureaucrat	Hervé("Hervé", 38);
	std::cout << Hervé;

	try {
		Form	B15("B15", 151, 1);
	}
	catch (std::exception& e) {
		printError(e);
	}
	try {
		Form	B15("B15", 1, 0);
	}
	catch (std::exception& e) {
		printError(e);
	}

		Form	B12("B12", 42, 42);
		Form	F13("F13", 1, 1);

		std::cout << std::endl << B12 << F13;

		std::cout << "---- \nTesting if hervé can sign twice the same form : " << std::endl;
		Hervé.signForm(B12);
		std::cout << B12;
		Hervé.signForm(B12);

		std::cout << "---- \n\nTesting if hervé of grade 42 can sign form of required grade 1 : " << std::endl;
		Hervé.signForm(F13);
}