// cpp08ex01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "span.hpp"

int main()
{
    
        Span sp = Span(10);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::vector<int> gp = {1 , 2 ,100 , 4, 90};
        sp.addNumber(gp.begin(), gp.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;




}

