#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"



class Ice : public AMateria
{
    private:
        std::string type;
    public:
        Ice();
        ~Ice();
        Ice(Ice const &type);
    
        Ice &operator=(Ice const &ice);
        std::string const & getType(void) const;
        Ice *clone() const;
        void use(ICharacter& target);



        
}   ;
#endif