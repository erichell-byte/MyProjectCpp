#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    std::cout << "Constructor of character " << this->name << " called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->bag[i] = 0;
}


Character::Character(Character const &charac)
{
    this->name = charac.getName() + "_copy";
    for (int i = 0; i < 4; i++)
    {
        if (charac.bag[i])
            this->bag[i] = (charac.bag[i])->clone();
    }
    std::cout << "Character " << this->name << " was created from character of " << charac.name << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->bag[i])
            delete this->bag[i];
    }
    std::cout << "Character " << this->name << " was destroyed" << std::endl;
}

std::string const &Character::getName(void) const
{
    return (this->name);
}

Character &Character::operator=(Character const &charac)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->bag[i])
            delete (this->bag[i]);
        this->bag[i] = (charac.bag[i])->clone();
    }
    return (*this);
}

void Character::equip(AMateria *m)
{
    int i = 0;   
    if (!m)
    {
        std::cout << " I cant equip incorrect material" << std::endl;
        return ;
    }
    while (this->bag[i] != 0 && i < 4)
        i++;
    if (i > 3)
    {
        std::cout << " I cant equip more then 4 materia" << std::endl;
        return ;
    }
    this->bag[i] = m;
    std::cout << "Character " << this->name << " equipeed materia " << m->getType() << " at slot " << i << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        std::cout << " Wrong material index" << std::endl;
    else if (!(this->bag[idx]))
        std::cout << "not equped materia at this index" << std::endl;
    else
    {
        std::cout << this->name << " unequipped " << (this->bag)[idx]->getType() << " from slot number " << idx << std::endl;
        this->bag[idx] = 0;
    }   
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !(this->bag[idx]))
    {
        std::cout << "This index is empty -> " << idx << std::endl;
        return ;
    }
    // std::cout << name;
    (this->bag[idx])->use(target);

}

