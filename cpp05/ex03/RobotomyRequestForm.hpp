#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm {
	private:
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm();

		void execute(const Bureaucrat& executor);
		void executeConcrete() const;

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
};

#endif