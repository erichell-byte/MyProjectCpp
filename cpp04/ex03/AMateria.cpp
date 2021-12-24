#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Amateria used on " << target.getName() << std::endl;
}

AMateria::AMateria()
{
    // this->type = "some type";
    std::cout << "Constructor of Materia was called" << std::endl;
}

AMateria::AMateria(AMateria const &materia)
{
    this->type = materia.type;
}

AMateria::~AMateria()
{
    std::cout << "destructor for amateria called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const & mater)
{
    if (this != &mater)
    {
        this->type = mater.type;
    }
    return (*this);
}
