#include "AForm.hpp"

static void	checkGrade(int grade, int min = MIN_GRADE, int max = MAX_GRADE) {
	if (grade > min)
		throw AForm::GradeTooLowException();
	else if (grade < max)
		throw AForm::GradeTooHighException();
}

AForm::AForm(): signGrade(0), execGrade(0) {}

AForm::AForm(const std::string& name, const std::string &target, int signGrade, int execGrade)
	: name(name)
	, target(target)
	, isSigned(false)
	, signGrade(signGrade)
	, execGrade(execGrade) {
	checkGrade(signGrade);
	checkGrade(execGrade);
}

AForm::AForm(const AForm& other)
	: name(other.name)
	, isSigned(false)
	, signGrade(other.signGrade)
	, execGrade(other.execGrade) {}

AForm::~AForm() {}

AForm&	AForm::operator =(const AForm& other) {
	if (this != &other) {}
	return *this;
}

const std::string&	AForm::getName() const {
	return name;
}

bool	AForm::getSigned() const {
	return isSigned;
}

int	AForm::getSignGrade() const {
	return signGrade;
}

int	AForm::getExecGrade() const {
	return execGrade;
}

void	AForm::sign(const Bureaucrat& bureaucrat) {
	if (isSigned)
		throw AlreadySignedException();
	if (signGrade < bureaucrat.getGrade())
		throw GradeTooLowException();
	isSigned = true;
}

void	AForm::execute(const Bureaucrat& executor) {
	if (!isSigned)
		throw ExecUnsignedException();
	if (execGrade < executor.getGrade())
		throw GradeTooLowException();
	executeConcrete();
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return "his grade is too low";
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return "his grade is too high";
}

const char*	AForm::AlreadySignedException::what() const throw() {
	return "cannot sign a form twice!";
}

const char*	AForm::ExecUnsignedException::what() const throw() {
	return "cannot execute unsigned form!";
}

std::ostream&	operator<<(std::ostream &o, const AForm& form) {
	o << std::boolalpha <<"-- Form informations : " << form.getName() << " --" << std::endl
	<< "Signed : " << form.getSigned() << std::endl
	  << "Grade needed to sign : " << form.getSignGrade() << std::endl
	  << "Grade needed to execute : " << form.getExecGrade()  << std::endl
	  << "-" << std::endl;
	return o;
}