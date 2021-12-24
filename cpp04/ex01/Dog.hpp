#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
        std::string type;
    public:
        Dog();
        ~Dog();
        Dog(Dog const &dog);
        Dog& operator=(Dog const &dog);
        void makeSound(void) const;
        std::string getType(void) const;
        Brain *getBrain(void ) const;

};
#endif