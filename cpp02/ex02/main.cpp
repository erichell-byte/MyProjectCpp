#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a(2);
Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// std::cout << a + b << std::endl;
// b.setRawBits(0);
std::cout << a / b << std::endl;

return 0;
}

/*
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
*/