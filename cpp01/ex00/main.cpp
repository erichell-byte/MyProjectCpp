#include "Zombie.hpp"

int main(void)
{
    std::string petr = "Petr";
    std::string vold = "volondemord";
    std::string porte = "Porte";

    Zombie zombie_petr(petr);
    zombie_petr.announce();

    std::cout << std::endl;

    Zombie *zombie_vol = newZombie(vold);
    zombie_vol->announce();
    delete zombie_vol;

    std::cout << std::endl;

    randomChump(porte);

    std::cout << std::endl;

    return (0);
}