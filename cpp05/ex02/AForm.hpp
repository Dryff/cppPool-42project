#ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"
# include <iomanip>
# include <stdexcept>
# include <string>

class Bureaucrat;

class AForm {
	protected :
		const std::string	name;
		const std::string	target;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

		virtual void	executeConcrete() const = 0;
	public:
		AForm();
		AForm(const std::string& name, const std::string &target, int gradeSign, int gradeExec);
		AForm(const AForm& other);
		~AForm();

		AForm&	operator =(const AForm& other);

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

std::ostream&	operator<<(std::ostream &o, const AForm& AForm);

#endif