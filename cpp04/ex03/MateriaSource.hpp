#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria *(bag[4]);
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & matSource);
        virtual ~MateriaSource();
        MateriaSource & operator=(MateriaSource const & matSource);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
  
}   ;

#endif
