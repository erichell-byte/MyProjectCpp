#include "Form.hpp"

Form::Form() : _name("default"), _gradeExe(150), _gradeSign(150), _isSigned(false)
{
    std::cout << "Default constructor called" << std::endl;
}


Form::Form(const std::string name, const int gradeSign, const int gradeExe) : _name(name), _gradeSign(gradeSign), _gradeExe(gradeExe), _isSigned(false) 
{
    if (gradeSign > 150 || gradeExe > 150)
        throw (Form::GradeTooLowException());
    if (gradeSign < 1 || gradeExe < 1)
        throw (Form::GradeTooHighException());
    else
        std::cout << "Constructor form was called and form " << _name << " created" << std::endl; 

}

Form::~Form()
{
    std::cout << "Default destructor form called" << std::endl;
}

const std::string Form::getName() const
{
    return(this->_name);
}

bool Form::getIsSigned() const
{
    return(this->_isSigned);
}

const int Form::getGradeSign() const
{
    return(this->_gradeSign);
}

const int Form::getGradeExe() const
{
    return (this->_gradeExe);   
} 

std::ostream &operator<<(std::ostream & o, Form & form)
{
    o << "Form " << form.getName() << " with a gradeExe " << form.getGradeExe() << " and gradeSign " 
    << form.getGradeSign() << " and status is signed: " << form.getIsSigned() << std::endl;   
    return (o);
}

void Form::beSigned(Bureaucrat &somebody)
{
    if (somebody.getGrade() < this->_gradeSign)
    {
        this->_isSigned = true;
        std::cout << "Bureaucrat " << somebody.getName() << " signed form " << this->getName() << std::endl;
    }
    else
    {   
        // std::cout << "Bureaucrat " << somebody.getName() << " cant signed form " << this->getName() << " because his grade is too low" << std::endl;
        throw (Form::GradeTooLowException());
    }
}

Form & Form::operator=(Form const & ref)
{
	this->_isSigned = ref.getIsSigned();
	return (*this);
}

const char * Form::GradeTooLowException::mess() const throw()
{
    return("grade too low\n");
}   

const char * Form::GradeTooHighException::mess() const throw()
{
    return("grade too hight\n");
}

const char * Form::FormIsNotSignedException::mess() const throw()
{
    return("Form is not Signed!\n");
}

const char * Form::Exception::mess() const throw()
{
	return ("Exception\n");
};