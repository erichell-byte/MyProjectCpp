#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(Intern const &ref)
{
    (void)ref;
}

Intern & Intern::operator=(Intern const & ref)
{
    (void)ref;
    return (*this);
}

static Form* new_robot(std::string target)
{
    Form *robot = new RobotomyRequestForm(target);
    return (robot);
}

static Form* new_president(std::string target)
{
    Form *president = new PresidentialPardonForm(target);
    return (president);
}

static Form* new_shrubbery(std::string target)
{
    Form *shrubbery = new ShrubberyCreationForm(target);
    return (shrubbery);
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
    Form *(*func[3])(std::string target) = {new_robot, new_president, new_shrubbery};
    std::string msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *tmp = NULL;
    for (int i = 0; i < 3; i++)
    {
        if (name == msg[i])
            tmp = func[i](target);
    }
    if (tmp)
        std::cout << "intern create form " << (tmp->getName()) << std::endl;
    else
        std::cout << "Form with name " << name << " not found " << std::endl;
    return(tmp);
}