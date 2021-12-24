#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor for DOG was called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &dog)
{
    std::cout << "Constructor assignment for Dog was called" << std::endl;
    this->type = dog.type;
}

Dog::~Dog()
{
    std::cout << "Destructor for DOG was called" << std::endl;
}

Dog& Dog::operator=(Dog const &dog)
{
    if (this != &dog)
        this->type = dog.type;
    return (*this);
}

std::string Dog::getType(void) const
{
    return (type);
}

void Dog::makeSound() const
{
    std::cout << "... make a DOG sound ..." << std::endl;
}

