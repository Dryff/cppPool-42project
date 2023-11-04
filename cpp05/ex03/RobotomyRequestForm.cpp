#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(): Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {}
	return *this;
}

void	RobotomyRequestForm::executeConcrete() const {
	if (rand() % 2)
		std::cout << target << " has been successfully robotimized!" << std::endl;
	else
		std::cout << target << " had some problems and its robotomy failed!" << std::endl;
}