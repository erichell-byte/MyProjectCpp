#include "Zombie.hpp"


void Zombie::announce(void)
{
    std::cout << "<" << getZombieName() << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie()
{
    Zombie::setZombieName(std::string());
}
Zombie::~Zombie(void)
{
    std::cout << "<" << getZombieName() << ">" << "Bye....orgdgs...." << std::endl;
}

Zombie::Zombie(std::string name)
{
    setZombieName(name);
}

std::string Zombie::getZombieName(void)
{
    return(_ZombieName);
}

void Zombie::setZombieName(std::string name)
{
    _ZombieName = name;
}


