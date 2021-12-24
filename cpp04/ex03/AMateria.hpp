#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
       std::string type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria();
        AMateria(AMateria const &materia);

        AMateria &operator=(AMateria const & mater);
        virtual std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif