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

void	Bureaucrat::incrementGrade(int change) {
	if (grade - change < 1)
		throw GradeTooHighException();
	grade -= change;
}

void	Bureaucrat::decrementGrade(int change) {
	if (grade + change > 150)
		throw GradeTooLowException();
	grade += change;
}

void	Bureaucrat::signForm(AForm& form) const {
	try {
		form.sign(*this);
		std::cout << name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << name << " cannot sign " << form.getName() << " because "
				  << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm &form) const
{
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout	<< name << " cannot execute " << form.getName() << " because "
					<< e.what() << std::endl;
	}
}


const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "<Bureaucrat> grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "<Bureaucrat> grade too high!";
}

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat) { o	<< bureaucrat.getName() << ", bureaucrat of grade "
		<< bureaucrat.getGrade() << std::endl;
	return o;
}