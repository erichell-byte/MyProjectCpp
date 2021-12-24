#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Unknow")
{
     _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << " ClapTrap " << _name << " was created " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << " ClapTrap " << _name << " was created " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
    _name = clap._name;
    _hitPoints = clap._hitPoints;
    _energyPoints = clap._energyPoints;
    _attackDamage = clap._attackDamage;
    std::cout << " ClapTrap " << _name << " was copiend " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << " ClapTrap " << _name << " was destroyed " << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
    std::cout << " ClapTrap " << _name << " copy from " << clap._name << std::endl;
    if (this != &clap)
    {
        _hitPoints = clap._hitPoints;
        _energyPoints = clap._energyPoints;
        _attackDamage = clap._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const & target) const
{
    std::cout << " ClapTrap " << _name << " attacks " << target << " ,taken "
     << _attackDamage << " damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << " " << this->_name << " take " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{   
    _hitPoints += amount;
    std::cout << " " << this->_name << " repair " << amount << " damage!" << std::endl;
}
