#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): AForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other) {}
	return *this;
}

void	PresidentialPardonForm::executeConcrete() const {
	std::cout << target << " was pardoned by Zaphod Beeblebrox!" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) {
	if (!isSigned)
		throw ExecUnsignedException();
	if (execGrade < executor.getGrade())
		throw GradeTooLowException();
	executeConcrete();
}