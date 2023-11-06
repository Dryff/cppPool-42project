#include "Form.hpp"

void	checkGrade(int grade) {
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(): _signGrade(0), _execGrade(0) {}

Form::Form(const std::string& name, int signGrade, int execGrade)
	: _name(name)
	, _isSigned(false)
	, _signGrade(signGrade)
	, _execGrade(execGrade) {
	checkGrade(signGrade);
	checkGrade(execGrade);
}

Form::Form(const Form& other)
	: _name(other._name)
	, _isSigned(false)
	, _signGrade(other._signGrade)
	, _execGrade(other._execGrade) {}

Form::~Form() {}

Form&	Form::operator =(const Form& other) {
	if (this != &other) {}
	return *this;
}

const std::string&	Form::getName() const {
	return _name;
}

bool	Form::getSigned() const {
	return _isSigned;
}

int	Form::getSignGrade() const {
	return _signGrade;
}

int	Form::getExecGrade() const {
	return _execGrade;
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (_isSigned)
		throw AlreadySignedException();
	if (_signGrade < bureaucrat.getGrade())
		throw GradeTooLowException();
	_isSigned = true;
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "one form parameter specified is too low";
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "one of form parameter specified is too high";
}

const char*	Form::AlreadySignedException::what() const throw() {
	return "cannot sign a form twice!";
}

std::ostream&	operator<<(std::ostream &o, const Form& form) {
	o << std::endl << std::boolalpha << "** Form informations : " << form.getName() << " **" << std::endl
	<< "Signed : " << form.getSigned() << std::endl
	  << "Grade needed to sign : " << form.getSignGrade() << std::endl
	  << "Grade needed to execute : " << form.getExecGrade() << std::boolalpha << std::endl
	  << std::endl ;
	return o;
}