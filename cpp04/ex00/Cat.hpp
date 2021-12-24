#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:

    public:
    Cat();
    ~Cat();
    Cat(Cat const &cat);
    Cat& operator=(Cat const &cat);
    void makeSound(void) const;
    std::string getType(void) const;
};
#endif