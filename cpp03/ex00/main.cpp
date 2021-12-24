#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap voin("Ivan"), voin1("Petr"), voin2("Svyatoclav");
    voin = voin1;
    voin.takeDamage(100);
    voin1.beRepaired(140);
    voin.attack("Petr");
}