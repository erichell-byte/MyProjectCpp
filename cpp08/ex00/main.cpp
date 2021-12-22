// cpp08ex00.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "easyfind.hpp"

int main()
{
    std::vector<int> aramis;

    int i = 4;
    while (i < 40)
    {   
        aramis.push_back(i);
        i = i * 2;
    }
    std::vector<int>::const_iterator iter;
    int a = 8;
    try
    {
        iter = easyfind(aramis, a);
        std::cout << *iter << std::endl;
    }
    catch (NoFindNumException &exc)
    {
        std::cout << exc.mess();
    }


}

