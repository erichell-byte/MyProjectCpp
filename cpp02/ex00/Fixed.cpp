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
Fixed Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (fixed._fixed == this->_fixed)
        return (*this);
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

