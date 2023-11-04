#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form {
	private:
		PresidentialPardonForm();
		virtual void	executeConcrete() const;
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
};

#endif