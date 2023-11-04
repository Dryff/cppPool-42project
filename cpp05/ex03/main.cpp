#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {
	Bureaucrat	Hervé("Hervé", 1);
	Intern titouan;
	Form *form;
	srand(time(NULL));

	std::cout << "------------------------" << std::endl;
	std::cout << "Robotomy request form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	form = titouan.makeForm("robotomy request", "Jack");
	Hervé.signForm(*form);
	Hervé.executeForm(*form);
	delete form;

	std::cout << "--------------------------" << std::endl;
	std::cout << "Shrubbbery Creation form : " << std::endl;
	std::cout << "--------------------------" << std::endl;
	form = titouan.makeForm("shrubbery creation", "Home");
	Hervé.signForm(*form);
	Hervé.executeForm(*form);
	delete form;

	std::cout << "------------------------" << std::endl;
	std::cout << "Presidential Pardon form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	form = titouan.makeForm("presidential pardon", "John");
	Hervé.signForm(*form);
	Hervé.executeForm(*form);
	delete form;

	std::cout << "------------------------" << std::endl;
	std::cout << "Trying to create a non existing form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = titouan.makeForm("Not a Form", "Nobody");
		Hervé.signForm(*form);
		Hervé.executeForm(*form);
	}
	catch (std::exception &e){
		std::cout << "Error : " << e.what() << std::endl;
	}
}