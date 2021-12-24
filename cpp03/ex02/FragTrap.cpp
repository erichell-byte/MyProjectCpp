#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << " FragTrap " << _name << " was created " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << " FragTrap " << _name << " was created " << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << " FragTrap " << _name << " was destroyed " << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << " FragTrap " << _name << " asking you high-five!" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &frag)
{
    std::cout << " Fragtrap " << _name << " copyes from " << frag._name << std::endl;
    if (this != &frag)
    {
        _hitPoints = frag._hitPoints;
        _energyPoints = frag._energyPoints;
        _attackDamage = frag._attackDamage;
    }
    return (*this);
}

void	FragTrap::attack(std::string const &target) const {
	std::cout << " FragTrap " << _name << " attacks " << target << " ,taken "
     << _attackDamage << " damage" << std::endl;
}

