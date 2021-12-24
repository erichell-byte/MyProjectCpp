#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "some ideas";
    }
    std::cout << "Brain has constructed" << std::endl;
}

Brain::~Brain()
{
    delete[] (this->ideas);
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain::Brain(Brain &brain)
{
    std::string *new_ideas = brain.getIdeas();
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = new_ideas[i] + ", + new ideas";
    }
    std::cout << "A brain has been copy with copy constructor!" << std::endl;
}

Brain &Brain::operator=(Brain const &brain)
{
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return (*this);
}

std::string *Brain::getIdeas()
{
    return(this->ideas);
}