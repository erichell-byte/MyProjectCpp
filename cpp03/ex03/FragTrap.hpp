#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap  
{
    public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &frag);

    FragTrap& operator=(FragTrap const &frag);

    void highFivesGuys(void);
    void attack(std::string const &target) const;
}   ;

#endif
