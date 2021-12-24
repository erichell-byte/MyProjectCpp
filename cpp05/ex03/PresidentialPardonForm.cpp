#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("default"), Form("Presidential", 25, 5)
{
    std::cout << "Presidential default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), Form("Presidential", 25, 5)
{
    std::cout << "Constructor Presidential for target " << this->_target << " called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor for Presidential Form was called" << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref) : Form(ref.getName(), ref.getGradeSign(), ref.getGradeExe())
{
    this->_target = ref.getTarget();
    std::cout << "Copy Constructor for Shrubbery Form was called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & ref)
{
    if (this != &ref)
    {
        this->_target = ref.getTarget();
    }
    return(*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{       
        if (!this->getIsSigned())
            throw (Form::FormIsNotSignedException());
        else if (executor.getGrade() > this->getGradeExe())
            throw (Form::GradeTooLowException());
        else
            std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}



