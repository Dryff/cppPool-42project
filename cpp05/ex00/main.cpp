#include "./Bureaucrat.hpp"

int	main() {

	std::cout << "--- Instantiation ---" << std::endl;

	try {
		Bureaucrat	Hervé("Hervé", 1);
		std::cout << Hervé;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	Jean("Jean", 0);
		std::cout << Jean;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	try {
		Bureaucrat	Jean("Jean", 200);
		std::cout << Jean;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--- Incrementing ---" << std::endl;

	try {
		Bureaucrat	Alain("Alain", 12);
		std::cout << Alain;
		Alain.incrementGrade(11);
		std::cout << Alain;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "--- Decrementing ---" << std::endl;

	try {
		Bureaucrat	Claude("Claude", 139);
		std::cout << Claude;
		Claude.decrementGrade(12);
		std::cout << Claude;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}