#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>
// #include "Dog.hpp"
// #include "Cat.hpp"


class Animal {
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &animal);


        Animal& operator=(Animal const &animal);
        virtual void makeSound(void) const;
        std::string getType(void) const;

};

#endif