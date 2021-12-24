#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

std::string HumanA::getName(void)
{
    return(_name);
}

Weapon HumanA::getWeapon(void)
{
    return(_weapon);
}

void HumanA::setName(std::string name)
{
    if (!name.empty())
        _name = name;
}

void HumanA::setWeapon(Weapon &weapon)
{
    _weapon = weapon;
}