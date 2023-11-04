#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm {
	private:
		RobotomyRequestForm();
		virtual void	executeConcrete() const;
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
};

#endif