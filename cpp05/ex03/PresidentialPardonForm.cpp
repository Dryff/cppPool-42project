#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): Form() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", target, 25, 5) {}

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