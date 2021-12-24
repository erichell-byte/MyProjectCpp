#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor for ANIMAL was called" << std::endl;
    this->type = "animal";
}

Animal::~Animal()
{
    std::cout << "Destructor for ANIMAL was called" << std::endl;
}


Animal::Animal(Animal const &animal)
{
    std::cout << "Constructor assignment for ANIMAL was called" << std::endl;
    this->type = animal.type;
}

Animal &Animal::operator=(Animal const &animal)
{
    if (this != &animal)
        this->type = animal.type;
    return (*this);
}

// void Animal::makeSound(void) const
// {
//     std::cout << "... make a ANIMAL sound ..." << std::endl;
// }

std::string Animal::getType(void) const
{
    return (this->type);
}


