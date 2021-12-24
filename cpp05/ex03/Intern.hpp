#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &ref);
        Intern & operator=(Intern const & ref);
        Form *makeForm(std::string const &name, std::string const &target);
        
} ;

#endif