#include "DiamondTrap.hpp"

int main(void)
{
    // ScavTrap voin("Ivan"), pritivnik("Chertogiv");

    // voin = pritivnik;
    // voin.attack("hermonoto");
    // voin.guardGate();
    // voin.beRepaired(140);
    // voin.attack("Petr");
    // FragTrap voin("Cecro");
    // voin.highFivesGuys();
    // voin.attack("Perfecto");

    DiamondTrap v1("Viktor");
    DiamondTrap v2;
    DiamondTrap v3(v1);

    v2 = v3;
    v1.whoAmI();
    v2.attack("dublin");
    v2.highFivesGuys();

}