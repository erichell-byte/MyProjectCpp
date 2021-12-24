#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Constructor for WrongCat was called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat was called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongCat)
{
    std::cout << "Constructor assignment for WrongCat was called" << std::endl;
    this->type = wrongCat.type;
}


WrongCat& WrongCat::operator=(WrongCat const &wrongCat)
{
    if (this != &wrongCat)
       this->type = wrongCat.type;
   return (*this);
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}

void WrongCat::makeSound(void) const
{
    std::cout << "... make a WrongCat sound ..." << std::endl;
}