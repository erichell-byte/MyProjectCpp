#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    
    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    Intern  someBandonIntern;
    Form*   sfd;
    sfd = someBandonIntern.makeForm("robotodsamy request", "Bender");




    

}