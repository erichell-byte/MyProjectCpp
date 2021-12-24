#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap( std::string name);
        ~ScavTrap();
        ScavTrap(ScavTrap const &clap);

        ScavTrap&	operator=(ScavTrap const &other);
        void        guardGate(void) const;
        void        attack(std::string const & target);
        
}   ;
#endif