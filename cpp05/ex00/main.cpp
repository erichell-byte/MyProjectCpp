#include "Bureaucrat.hpp"

int main(void)
{
    
    try
    {
        Bureaucrat kolya("Kolya", 160);
    }
    catch (Bureaucrat::Exception &except)
    {
        std::cout << except.mess();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat victor("Victor", -5);
    }
    catch(Bureaucrat::Exception &except)
    {
        std::cerr << except.mess();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat victor("Victor", 1);
        victor.incremGrade();
    }
    catch(Bureaucrat::Exception &except)
    {
        std::cerr << except.mess();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat victor("Victor", 150);
        victor.dicremGrade();
    }
    catch(Bureaucrat::Exception &except)
    {
        std::cerr << except.mess();
    }


    

}