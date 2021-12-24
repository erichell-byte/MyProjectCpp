#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{
    private:
    std::string _ZombieName;

    public:
    void announce( void );
    std::string getZombieName(void);
    void setZombieName(std::string);

    ~Zombie(void);
    Zombie(std::string name);
}   ;

Zombie* newZombie( std::string name );
void randomChump( std::string name );



#endif