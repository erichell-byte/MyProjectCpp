#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private:
        const std::string           _name;
        bool                      _isSigned;
        const int                 _gradeSign;
        const int                 _gradeExe;
    public:
        Form();
        Form(const std::string name, const int gradeSign, const int gradeExe);
        virtual ~Form();
        Form & operator=(Form const & ref);

        const std::string getName() const;
        bool              getIsSigned() const;
        const int         getGradeSign() const;
        const int         getGradeExe() const;
        
        void beSigned(Bureaucrat &somebody);

        class Exception : public std::exception
        {
            public:
                virtual const char* mess() const throw();
        }   ;

        class GradeTooHighException : public Form::Exception
        {
            public:
                virtual const char* mess() const throw();
        }   ;

        class GradeTooLowException : public Form::Exception
        {
            public:
                virtual const char* mess() const throw();
        }   ;

        class FormIsNotSignedException : public Form::Exception
        {
            public:
                virtual const char* mess() const throw();
        }   ;

        virtual void execute(Bureaucrat const & executor) const = 0;
}   ;

std::ofstream &operator<<(std::ofstream & o, Form & form);

#endif