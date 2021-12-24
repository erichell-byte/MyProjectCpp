#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main(void)
{
    const Animal* j = new Dog();
    std::cout << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;
    // Animal a = new Animal(); ругается
    delete j;//should not create a leak
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;

    Dog fedor;
    Cat kity;

    Dog copy_fedor(fedor);
    Cat copy_kity(kity);

    std::cout << std::endl;
    std::cout << (copy_fedor.getBrain()) << std::endl;
    std::cout << (fedor.getBrain()) << std::endl;

    std::cout << std::endl;

    std::cout << (copy_kity.getBrain()) << std::endl;
    std::cout << (kity.getBrain()) << std::endl;
    
    const Animal *(stado[4]);
    std::cout << std::endl;

    for (int i = 0; i < 2; i++)
    {
        stado[i] = new Dog();
    }
    for (int i = 2; i < 4; i++)
    {
        stado[i] = new Cat();
    }
    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
    {
        delete stado[i];
    }
    // std::cout << std::endl;





    return(0);
}