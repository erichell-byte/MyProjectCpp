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
        ~Form();

        const std::string getName();
        bool getIsSigned();
        const int getGradeSign();
        const int getGradeExe();
        
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
}   ;

std::ofstream &operator<<(std::ofstream & o, Form & form);

#endif