#ifndef Form_HPP
# define Form_HPP

# include "Bureaucrat.hpp"
# include <iomanip>
# include <stdexcept>
# include <string>

class Bureaucrat;

class Form {
	protected :
		const std::string	name;
		const std::string	target;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

		virtual void	executeConcrete() const = 0;
	public:
		Form();
		Form(const std::string& name, const std::string &target, int gradeSign, int gradeExec);
		Form(const Form& other);
		virtual ~Form();

		Form&	operator =(const Form& other);

		const std::string&	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void	sign(const Bureaucrat& bureaucrat);
		void	execute(const Bureaucrat& executor);


		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};

		class AlreadySignedException: public std::exception {
			virtual const char*	what() const throw();
		};

		class ExecUnsignedException: public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &o, const Form& Form);

#endif