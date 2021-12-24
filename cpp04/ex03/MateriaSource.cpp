#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->bag[i] = 0;
    std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & matSource)
{
    for (int i = 0; i < 4; i++)
    {
        if (matSource.bag[i])
            this->bag[i] = (matSource.bag[i])->clone();
    }
    std::cout << "MateriaSource was created from copy" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->bag[i])
            delete (this->bag[i]);
    }
    std::cout << "MateriaSource was destroyed" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & matSource)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->bag[i])
            delete this->bag[i];
        if (matSource.bag[i])
            this->bag[i] = (matSource.bag[i])->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while (this->bag[i] != 0 && i < 4)
        i++;
    if (i > 3)
    {
        std::cout << "We cant learn more then 4 materia" << std::endl;
        return ;
    }
    this->bag[i] = m;
    std::cout << "Materia " << m->getType() << " was learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (this->bag[i] && (this->bag[i])->getType() != type && i < 4)
        i++;
    if (i > 3 || !(this->bag[i]))
    {
        std::cout << type << " this type not found" << std::endl;
        return (NULL);
    }
    std::cout << " Materia " << type << " was created" << std::endl;
    return((this->bag[i])->clone());
}





