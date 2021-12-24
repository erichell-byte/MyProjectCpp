#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & ref);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const & ref);

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
}   ;

#endif