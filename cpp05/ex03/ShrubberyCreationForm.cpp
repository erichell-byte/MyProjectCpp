#include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : _target("default"), Form("Shrubbery", 145, 137)
{
    std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form("Shrubbery", 145, 137)
{
    std::cout << "Constructor Shrubbery for target " << this->_target << " called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor for Shrubbery Form was called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ref) : Form(ref.getName(), ref.getGradeSign(), ref.getGradeExe())
{
    this->_target = ref.getTarget();
    std::cout << "Copy Constructor for Shrubbery Form was called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ref)
{
    if (this != &ref)
    {
        this->_target = ref.getTarget();
    }
    return(*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
        std::string	tree = 
        "     ccee88oo          \n"
        "  C8O8O8Q8PoOb o8oo    \n"
        " dOB69QO8PdUOpugoO9bD  \n"
        "CgggbU8OU qOp qOdoUOdcb\n"
        "   6OuU  /p u gcoUodpP \n"
        "      \\\\//  /douUP   \n"
        "        \\\\////       \n"
        "         |||/\\        \n"
        "         |||\\/        \n"
        "         |||||         \n"
        "  .....\\//||||\\....  \n";
        
        if (!this->getIsSigned())
            throw (Form::FormIsNotSignedException());
        else if (executor.getGrade() > this->getGradeExe())
            throw (Form::GradeTooLowException());
        else
        {   
            std::ofstream fout;
            fout.open(this->getTarget() + "_shrubbery", std::ios::out);
            if (!fout.is_open())
            {
                std::cout << "cannot open target file" << std::endl;
                return ;
            }
            fout << tree;
        }
        
}



