#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:

    public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &wrongCat);
    WrongCat& operator=(WrongCat const &wrongCat);
    void makeSound(void) const;
    std::string getType(void) const;
};
#endif