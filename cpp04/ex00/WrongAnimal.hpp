#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const &animal);

        WrongAnimal& operator=(WrongAnimal const &wrongAnimal);
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif