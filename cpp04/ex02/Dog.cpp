#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain;
    std::cout << "Constructor for DOG was called" << std::endl;
   
}

Dog::Dog(Dog const &dog)
{
    this->brain = new Brain(*(dog.getBrain()));
    this->type = dog.getType();
    std::cout << "Constructor assignment for Dog was called, but has its own brain" << std::endl;
    
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Destructor for DOG was called" << std::endl;
}

Dog& Dog::operator=(Dog const &dog)
{
    if (this->brain)
        delete (this->brain);
    this->brain = new Brain;
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

Brain *Dog::getBrain(void) const
{
    return(this->brain);
}
