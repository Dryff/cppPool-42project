#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iomanip>
# include <stdexcept>
# include <string>

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

		Form();
	public:
		Form(const std::string& name, int gradeSign, int gradeExec);
		Form(const Form& other);
		~Form();

		Form&	operator =(const Form& other);

		const std::string&	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void	sign(const Bureaucrat& bureaucrat);

		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};

		class AlreadySignedException: public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &o, const Form& form);

#endif