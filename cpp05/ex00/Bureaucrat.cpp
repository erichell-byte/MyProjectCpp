#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("nameless")
{
    this->grade = 150;
    std::cout << "Default construcror called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->name << " with grade " << this->grade << " was killed" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bur) : name(bur.getName())
{
    this->grade = bur.getGrade();
    std::cout << "Bureaucrat " << this->name <<  " with a grade " << this->grade << " been constructed" << std::endl;
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

const std::string Bureaucrat::getName() const
{
   return (this->name);
}

// void Bureaucrat::setGrade(const int new_grade)
// {
//     this->grade = new_grade;
//     std::cout << "Bureaucrat " << this->name << " set grade " << new_grade << std::endl;
// }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else
    {
        this->grade = grade;
        std::cout << "Bureaucrat " << this->name << " with a grade " << this->grade << " has been constructed" << std::endl;  
    }
}

void Bureaucrat::incremGrade()
{
    if (this->grade - 1 < 1)
        throw (Bureaucrat::GradeTooHighException());
    else
    {
        std::cout << "Increment bureaucrat " << name << " with grade " << grade << " by 1" << std::endl;
        this->grade--;
    }
}

void Bureaucrat::dicremGrade()
{   

    if (this->grade + 1 > 150)
        throw (Bureaucrat::GradeTooLowException());
    else
    {
        std::cout << "Dicrement bureaucrat " << name << " with grade " << grade << " by 1" << std::endl;
        this->grade++;
    }
        
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & bur)
{
    if (this != &bur)
        this->grade = bur.grade;
    return (*this);
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const & bur)
{
    o << "Bureaucrat " << bur.getName() << " with a grade " << bur.getGrade() << std::endl;   
    return (o);
}

const char * Bureaucrat::GradeTooLowException::mess() const throw()
{
    return("grade cannot be less than 150\n");
}   

const char * Bureaucrat::GradeTooHighException::mess() const throw()
{
    return("grade cannot be more than 1\n");
}   

const char * Bureaucrat::Exception::mess() const throw()
{
	return ("Exception\n");
};




