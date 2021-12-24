#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Constructor for Cat was called" << std::endl;
    
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Destructor for Cat was called" << std::endl;
}

Cat::Cat(Cat const &cat)
{
    this->brain = new Brain(*(cat.getBrain()));
    this->type = cat.getType();
    std::cout << "Constructor assignment for Dog was called, but has its own brain" << std::endl;
}

Cat& Cat::operator=(Cat const &cat)
{
    if (this->brain)
        delete (this->brain);
    this->brain = new Brain;
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

Brain *Cat::getBrain(void) const
{
    return(this->brain);
}
