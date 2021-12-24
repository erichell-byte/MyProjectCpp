#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"


Ice::Ice()
{
    this->type = "ice";
    std::cout << "Constructor for ICE was called" << std::endl;
}

Ice::Ice(Ice const &type)
{
    this->type = type.getType();
    std::cout << "Copy constructor for ICE was called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor for ICE was called" << std::endl;
}

Ice &Ice::operator=(Ice const &ice)
{
    if (this != &ice)
    {
        this->type = ice.type;
    }
    return (*this);
}

std::string const & Ice::getType(void) const
{
    return (this->type);
}

Ice *Ice::clone(void) const
{
    Ice *new_ice = new Ice();
    return(new_ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}