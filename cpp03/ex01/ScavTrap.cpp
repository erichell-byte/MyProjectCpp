#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << " ScavTrap " << _name << " was created " << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << " ScavTrap " << _name << " was created " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &clap): ClapTrap(clap)
{
    std::cout << " ScavTrap " << _name << " was copiend " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << " ScavTrap " << _name << " was destroyed " << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &clap)
{
    std::cout << " ScavTrap " << _name << " copy from " << clap._name << std::endl;
    if (this != &clap)
    {
        _hitPoints = clap._hitPoints;
        _energyPoints = clap._energyPoints;
        _attackDamage = clap._attackDamage;
    }
    return (*this);
}

void ScavTrap::guardGate(void) const {
    std::cout << "ScavTrap " << _name << " is guarding the gate" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << _name << " is guarding the gate" << std::endl;
}
