#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _name("default")
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << " DiamondTrap " << _name << " was created" << std::endl; 
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << " DiamondTrap " << _name << " was created" << std::endl; 
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond): ClapTrap(diamond)
{
    std::cout << " DiamondTrap " << _name << " was copy" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << " DiamondTrap " << _name << " was destroyed " << std::endl;
}

DiamondTrap& DiamondTrap::operator= (DiamondTrap const &diamond)
{
    std::cout << " DiamondTrap " << _name << " copied from " << diamond._name << std::endl;
    if (this != &diamond)
    {
        _hitPoints = diamond._hitPoints;
        _energyPoints = diamond._energyPoints;
        _attackDamage = diamond._attackDamage;
    }
    return (*this);
}

void DiamondTrap::attack(std::string const &target) const
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << " name of DiamondTrap " << _name << " and " ;
    std::cout << ClapTrap::_name << " is ClapTrap name " << std::endl;
}