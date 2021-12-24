#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & bur);
        Bureaucrat(std::string name, int grade);
 
        Bureaucrat &operator=(Bureaucrat const & bur);

    
        const std::string   getName() const;
        int                 getGrade() const ;
        // void                setGrade(const int new_grade);
        void                incremGrade();
        void                dicremGrade();
        void                signForm(Form & form);
        void                executeForm(Form const & form);

        class Exception : public std::exception
        {
            public:
                virtual const char* mess() const throw();
        }   ;

        class GradeTooLowException : public Bureaucrat::Exception
        {
            public:
                virtual const char* mess() const throw();   
        }   ;

        class GradeTooHighException : public Bureaucrat::Exception
		{
            public:
                virtual const char* mess() const throw();
        }   ;

}   ;

std::ofstream &operator<<(std::ofstream & o, Bureaucrat const & bur);

#endif