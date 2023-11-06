#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	private:
		PresidentialPardonForm();
		void executeConcrete() const;
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm();

		void execute(const Bureaucrat& executor);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
};

#endif