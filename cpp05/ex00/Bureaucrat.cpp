#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
	: name(name)
	, grade(grade) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: name(other.name)
	, grade(other.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator =(const Bureaucrat& other) {
	if (this != &other)
		grade = other.grade;
	return *this;
}

const std::string&	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::incrementGrade(int nbr) {
	std::cout << "Incrementing " << name << "'s grade by " << nbr << ": ";
	if (grade - nbr < 1)
		throw GradeTooHighException();
	grade -= nbr;
}

void	Bureaucrat::decrementGrade(int nbr) {
	std::cout << "Decrementing " << name << "'s grade by " << nbr << ": ";
	if (grade + nbr > 150)
		throw GradeTooLowException();
	grade += nbr;
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high!";
}

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat) {
	o	<< bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << std::endl;
	return o;
}