#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure()
{
    this->type = "cure";
    std::cout << "Constructor for CURE was called" << std::endl;
}

Cure::Cure(Cure const &type)
{
    this->type = type.getType();
    std::cout << "Copy constructor for CURE was called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor for CURE was called" << std::endl;
}

Cure &Cure::operator=(Cure const &cure)
{
    if (this != &cure)
    {
        this->type = cure.type;
    }
    return (*this);
}

std::string const & Cure::getType(void) const
{
    return (this->type);
}

Cure *Cure::clone(void) const
{
    Cure *new_cure = new Cure();
    return (new_cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}   