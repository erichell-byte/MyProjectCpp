#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _fixed;
    static const int _litt = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    void    operator = (const Fixed &fixed);
    bool    operator > (const Fixed &fixed) const;
    bool    operator < (const Fixed &fixed) const;
    bool    operator >= (const Fixed &fixed) const;
    bool    operator <=(const Fixed &fixed) const;
    bool    operator ==(const Fixed &fixed) const;
    bool    operator !=(const Fixed &fixed) const;
    Fixed   operator + (const Fixed &fixed) const;
    Fixed   operator - (const Fixed &fixed) const;
    Fixed   operator * (const Fixed &fixed) const;
    Fixed   operator / (const Fixed &fixed) const;
    Fixed   operator ++(int);
    Fixed   operator ++();
    Fixed   operator --(int);
    Fixed   operator --();
    static Fixed &min(Fixed &x, Fixed &y);
    const static Fixed &min(const Fixed &x, const Fixed &y);
    static Fixed &max(Fixed &x, Fixed &y);
    const static Fixed &max(const Fixed &x, const Fixed &y);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
}   ;

    std::ostream &operator <<(std::ostream &out, const Fixed &fixed);

#endif