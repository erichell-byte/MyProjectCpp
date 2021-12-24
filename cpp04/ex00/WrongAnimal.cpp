#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor for WrongAnimal was called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal was called" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
    std::cout << "Constructor assignment for WrongAnimal was called" << std::endl;
    this->type = wrongAnimal.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wrongAnimal)
{
    if (this != &wrongAnimal)
        this->type = wrongAnimal.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "... make a WrongAnimal sound ..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}