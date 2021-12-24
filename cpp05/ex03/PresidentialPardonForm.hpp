#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & ref);

        PresidentialPardonForm &operator=(PresidentialPardonForm const & ref);

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
}   ;

#endif