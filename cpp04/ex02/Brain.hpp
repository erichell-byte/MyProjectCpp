#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain();
        ~Brain();
        Brain(Brain &brain);
        Brain &operator=(Brain const &brain);
        std::string *getIdeas();
};
#endif
