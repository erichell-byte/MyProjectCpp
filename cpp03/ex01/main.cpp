#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap voin("Ivan"), pritivnik("Chertogiv");

    voin = pritivnik;
    voin.attack("hermonoto");
    voin.guardGate();
    voin.beRepaired(140);
    voin.attack("Petr");
}