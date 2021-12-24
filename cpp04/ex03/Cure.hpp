#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        std::string type;
    public:
        Cure();
        ~Cure();
        Cure(Cure const &type);
    
        Cure &operator=(Cure const &ice);
        std::string const & getType(void) const;
        Cure *clone() const;
        void use(ICharacter& target);
  
}   ;
#endif