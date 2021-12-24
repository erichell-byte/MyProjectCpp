#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm & ref);

        RobotomyRequestForm &operator=(RobotomyRequestForm const & ref);

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;

        class FailureRobotoException : public Form::Exception
		{
			public:
				virtual const char* mess() const throw();
		};
}   ;

#endif