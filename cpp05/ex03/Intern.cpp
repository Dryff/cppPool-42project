/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:50:41 by ael-khni          #+#    #+#             */
/*   Updated: 2022/08/01 17:10:56y ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& src) {
    *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& rhs) {
    (void) rhs;
    return (*this);
}

AForm*   Intern::makeForm(std::string name, std::string target) {

    std::string formNames[] = {"shrubbery creation", "robotomy request",\
     "presidential pardon"};
    AForm*    forms[] = {new ShrubberyCreationForm(target), \
    new RobotomyRequestForm(target), new PresidentialPardonForm(target), };
    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i]) {
            std::cout << "An intern created a " << name << " form" << std::endl;
            for (int j = i + 1;  j < 3; j++) {
                delete forms[j];
            }
            return forms[i];
        }
        else delete forms[i];
    }
    throw FormNotFoundException();
}
    const char*	Intern::FormNotFoundException::what() const throw() {
	return "Form cannot be created by Intern";
}