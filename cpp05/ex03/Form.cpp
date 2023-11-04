#include "Form.hpp"

static void	checkGrade(int grade, int min = MIN_GRADE, int max = MAX_GRADE) {
	if (grade > min)
		throw Form::GradeTooLowException();
	else if (grade < max)
		throw Form::GradeTooHighException();
}

Form::Form(): signGrade(0), execGrade(0) {}

Form::Form(const std::string& name, const std::string &target, int signGrade, int execGrade)
	: name(name)
	, target(target)
	, isSigned(false)
	, signGrade(signGrade)
	, execGrade(execGrade) {
	checkGrade(signGrade);
	checkGrade(execGrade);
}

Form::Form(const Form& other)
	: name(other.name)
	, isSigned(false)
	, signGrade(other.signGrade)
	, execGrade(other.execGrade) {}

Form::~Form() {}

Form&	Form::operator =(const Form& other) {
	if (this != &other) {}
	return *this;
}

const std::string&	Form::getName() const {
	return name;
}

bool	Form::getSigned() const {
	return isSigned;
}

int	Form::getSignGrade() const {
	return signGrade;
}

int	Form::getExecGrade() const {
	return execGrade;
}

void	Form::sign(const Bureaucrat& bureaucrat) {
	if (isSigned)
		throw AlreadySignedException();
	if (signGrade < bureaucrat.getGrade())
		throw GradeTooLowException();
	isSigned = true;
}

void	Form::execute(const Bureaucrat& executor) {
	if (!isSigned)
		throw ExecUnsignedException();
	if (execGrade < executor.getGrade())
		throw GradeTooLowException();
	executeConcrete();
	
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "his grade is too low";
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "his grade is too high";
}

const char*	Form::AlreadySignedException::what() const throw() {
	return "cannot sign a form twice!";
}

const char*	Form::ExecUnsignedException::what() const throw() {
	return "cannot execute unsigned form!";
}

std::ostream&	operator<<(std::ostream &o, const Form& form) {
	o << std::boolalpha <<"-- Form informations : " << form.getName() << " --" << std::endl
	<< "Signed : " << form.getSigned() << std::endl
	  << "Grade needed to sign : " << form.getSignGrade() << std::endl
	  << "Grade needed to execute : " << form.getExecGrade()  << std::endl
	  << "-" << std::endl;
	return o;
}