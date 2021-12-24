#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>



class Animal {
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &animal);
        
        Animal& operator=(Animal const &animal);
        virtual void makeSound(void) const = 0;
        virtual std::string getType(void) const;
        

};

#endif