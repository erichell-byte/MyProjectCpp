# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void        attack();
        std::string getName(void);
        Weapon      getWeapon(void);
        void        setName(std::string name);
        void        setWeapon(Weapon &weapon);
        

} ;
#endif