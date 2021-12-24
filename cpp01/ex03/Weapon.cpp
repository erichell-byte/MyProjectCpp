#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    setType(weapon);
}

const std::string Weapon::getType(void)
{
    if (_weapon.empty())
        return ("No weapon");
    return (_weapon);
}

void Weapon::setType(const std::string& type)
{
    if (type.empty())
    {
        std::cout << "There are no weapons to give a man" << std::endl;
    }
    else
        _weapon = type;
}

Weapon::~Weapon()
{

}