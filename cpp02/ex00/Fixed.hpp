#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int _fixed;
    static const int _litt = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();
    Fixed operator = (const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif