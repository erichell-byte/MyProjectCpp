#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fixed = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed = copy.getRawBits();
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed = num << _litt;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    _fixed = (int)(roundf(num * (1 << _litt)));

}

void Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed = fixed.getRawBits();
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
    _fixed = raw;
}

float   Fixed::toFloat( void ) const
{
    return((float)_fixed / (float)(1 << _litt));
}

int Fixed::toInt() const
{
    return((int)_fixed >> _litt);
}

std::ostream &operator <<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}



