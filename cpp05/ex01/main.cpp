#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    
    // try
    // {
    //     Bureaucrat kolya("Kolya", 160);
    // }
    // catch (Bureaucrat::Exception &except)
    // {
    //     std::cout << except.mess();
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;
    // try
    // {
    //     Bureaucrat victor("Victor", -5);
    // }
    // catch(Bureaucrat::Exception &except)
    // {
    //     std::cerr << except.mess();
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;
    // try
    // {
    //     Bureaucrat victor("Victor", 1);
    //     victor.incremGrade();
    // }
    // catch(Bureaucrat::Exception &except)
    // {
    //     std::cerr << except.mess();
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;
    // try
    // {
    //     Bureaucrat victor("Victor", 150);
    //     victor.dicremGrade();
    // }
    // catch(Bureaucrat::Exception &except)
    // {
    //     std::cerr << except.mess();
    // }

    Bureaucrat viktor("viktor", 25);
    Form a("a45", 23, 23);
    viktor.signForm(a);
    std::cout << std::endl;
    Bureaucrat pavel("pavel", 1);
    try
    {
        Form c("b23", 270, 23);
    }
    catch(Form::Exception &e)
    {
        std::cout << e.mess() << '\n';
    }
    
    Form b("b23", 23, 23);
    pavel.signForm(b);
    std::cout << std::endl;
    

    

}