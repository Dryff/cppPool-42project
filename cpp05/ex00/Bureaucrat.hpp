#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>

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

		void	incrementGrade(int nbr = 1);
		void	decrementGrade(int nbr = 1);

		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat);

#endif