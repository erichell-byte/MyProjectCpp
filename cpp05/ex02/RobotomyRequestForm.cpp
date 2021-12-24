#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm() : _target("default"), Form("Roboto", 72, 45)
{
    std::cout << "Roboto default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form("Roboto", 72, 45)
{
    std::cout << "Constructor Roboto for target " << this->_target << " called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor for Roboto Form was called" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & ref) : Form(ref.getName(), ref.getGradeSign(), ref.getGradeExe())
{
    this->_target = ref.getTarget();
    std::cout << "Copy Constructor for Roboto Form was called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & ref)
{
    if (this != &ref)
    {
        this->_target = ref.getTarget();
    }
    return(*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

const char * RobotomyRequestForm::FailureRobotoException::mess() const throw()
{
    return("Robotization failed\n");
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw (Form::FormIsNotSignedException());
    else if (executor.getGrade() > this->getGradeExe())
        throw (Form::GradeTooLowException());
    else
    {
        std::srand(std::time(nullptr));
        int random = std::rand() % 2;
        std::cout << "random number is " << random << std::endl;
        if (random == 1)
            std::cout << "Robotization for " << this->_target << " has been succesfull" << std::endl;
        else
            throw (RobotomyRequestForm::FailureRobotoException());    
    }
}
