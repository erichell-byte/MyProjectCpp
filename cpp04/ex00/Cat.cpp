#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor for Cat was called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat was called" << std::endl;
}

Cat::Cat(Cat const &cat)
{
    std::cout << "Constructor assignment for Cat was called" << std::endl;
    this->type = cat.type;
}


Cat& Cat::operator=(Cat const &cat)
{
    if (this != &cat)
       this->type = cat.type;
   return (*this);
}

std::string Cat::getType(void) const
{
    return (this->type);
}

void Cat::makeSound(void) const
{
    std::cout << "... make a Cat sound ..." << std::endl;
}
