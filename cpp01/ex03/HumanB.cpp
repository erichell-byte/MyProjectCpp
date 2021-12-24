#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{   
    if (_weapon)
    {
        std::cout << getName() << " attacks with his " << _weapon->getType() << std::endl;
    }
    else
    {
        std::cout << "attack without weapon.." << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon_type)
{
    _weapon = &weapon_type;
}

Weapon& HumanB::getWeapon(void)
{
    return (*_weapon);
}

std::string& HumanB::getName(void)
{
    return (_name);
}

void HumanB::setName(std::string name)
{
    if (name.empty())
    {
        std::cout << "This Man havent NAME! The name cannot be empty" << std::endl;
    }
    else
    {
        _name = name;
    }
}