#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap();
        ClapTrap( std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap const &clap);

        ClapTrap& operator=(ClapTrap const &clap);

        void attack(std::string const & target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        

}   ;

#endif