#ifndef CHARACTER_HPP
#define CHARACTER_HPP


# include "ICharacter.hpp"


class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *(bag[4]);
    public:
        Character(Character const &charac);
        ~Character();
        Character(std::string name);
        Character &operator=(Character const &charac);

        std::string const &getName(void) const;
        void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

        // Character *clone() const;
        // void use(ICharacter& target);
  
}   ;
#endif