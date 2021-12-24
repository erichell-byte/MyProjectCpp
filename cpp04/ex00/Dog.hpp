#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:


    public:
    Dog();
    ~Dog();
    Dog(Dog const &dog);
    Dog& operator=(Dog const &dog);
    void makeSound(void) const;
    std::string getType(void) const;

};
#endif