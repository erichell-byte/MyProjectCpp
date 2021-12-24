#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap,  public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &diamond);
        ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap const &diamond);
        void attack(std::string const &target) const;
        void whoAmI();
}   ;

#endif