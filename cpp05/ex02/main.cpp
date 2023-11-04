#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	Bureaucrat	Hervé("Hervé", 1);
	Bureaucrat	Alain("Alain", 42);
	std::cout << Hervé << Alain;

	ShrubberyCreationForm form1("home");
	RobotomyRequestForm form2("Jordan");
	PresidentialPardonForm form3("Kevin");
	srand(time(NULL));

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 1 - ShrubberyCreationForm : " << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	Hervé.signForm(form1);
	Hervé.executeForm(form1);
	std::cout << std::endl;

	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 2 - RobotomyRequestForm : " << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	Hervé.signForm(form2);
	Hervé.executeForm(form2);
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 3 - PresidentialPardonForm : " << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	Hervé.signForm(form3);
	std::cout << "Attempt 1 : ";
	Hervé.executeForm(form2);
	std::cout << "Attempt 2 : ";
	Hervé.executeForm(form2);
	std::cout << "Attempt 3 : ";
	Hervé.executeForm(form2);
	std::cout << "Attempt 4 : ";
	Hervé.executeForm(form2);
	std::cout << "Attempt 5 : ";
	Hervé.executeForm(form2);
	PresidentialPardonForm form4("Marc");
	
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Trying to execute unsigned form : " << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << form4;
	Hervé.executeForm(form4);
	std::cout << std::endl;

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Trying to execute form too high for Alain : " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << form4 << Alain;
	Alain.executeForm(form3);
	std::cout << std::endl;
	}