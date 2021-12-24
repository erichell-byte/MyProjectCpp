#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain* brain;
        std::string type;
    public:
        Cat();
        ~Cat();
        Cat(Cat const &cat);
        Cat& operator=(Cat const &cat);
        void makeSound(void) const;
        std::string getType(void) const;
        Brain *getBrain(void) const;
};
#endif