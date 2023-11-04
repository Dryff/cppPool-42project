#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# include <stdexcept>
# include <string>

# define MIN_GRADE	150
# define MAX_GRADE	1

class AForm;

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;

		Bureaucrat();
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		Bureaucrat&	operator =(const Bureaucrat& other);

		const std::string&	getName() const;
		int					getGrade() const;

		void	incrementGrade(int change = 1);
		void	decrementGrade(int change = 1);

		void	signForm(AForm& form) const;
		void	executeForm(AForm &form) const;

		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat);

#endif