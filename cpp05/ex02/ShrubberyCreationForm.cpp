#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {}
	return *this;
}

void	ShrubberyCreationForm::executeConcrete() const {
	std::fstream	fs;

	fs.open(target + "_shrubbery", std::fstream::out | std::fstream::trunc);

	if (!fs.good())
		std::cerr << "Error while opening Shrubbery target file" << std::endl;

	fs <<
	"						                   # #### ####\n"
    "                            ### \\/#|### |/####\n"
    "                           ##\\/#/ \\||/##/_/##/_#\n"
    "                         ###  \\/###|/ \\/ # ###\n"
    "                       ##_\\_#\\_\\## | #/###_/_####\n"
    "                      ## #### # \\ #| /  #### ##/##\n"
    "                       __#_--###`  |{,###---###-~\n"
    "                                 \\ }{\n"
    "                                  }}{\n"
    "                                  }}{\n"
    "                                  {{}\n"
    "                            , -=-~{ .-^- _\n"
    "                                  `}\n ";
	fs.close();
}