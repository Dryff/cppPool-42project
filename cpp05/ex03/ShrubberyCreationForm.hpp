#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
	private:
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		virtual ~ShrubberyCreationForm();

		void execute(const Bureaucrat& executor);
		void executeConcrete() const;

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
};

#endif