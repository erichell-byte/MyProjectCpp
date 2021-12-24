#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    _fixed = 0;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    _fixed = copy.getRawBits();
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" << std::endl;
    _fixed = num << _litt;
}

Fixed::Fixed(const float num)
{
    // std::cout << "Float constructor called" << std::endl;
    _fixed = (int)(roundf(num * (1 << _litt)));

}

void Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed = fixed.getRawBits();
}

bool Fixed::operator > (const Fixed &fixed) const
{
    return (this->_fixed > fixed.getRawBits());
}

bool Fixed::operator < (const Fixed &fixed) const
{
    return (this->_fixed < fixed.getRawBits());
}

bool Fixed::operator >=(const Fixed &fixed) const
{
    return (this->_fixed >= fixed.getRawBits());
}

bool Fixed::operator <=(const Fixed &fixed) const
{
    return (this->_fixed <= fixed.getRawBits());
}

bool Fixed::operator ==(const Fixed &fixed) const
{
    return (this->_fixed == fixed.getRawBits());
}

bool Fixed::operator !=(const Fixed &fixed) const
{
    return (this->_fixed != fixed.getRawBits());
}

Fixed Fixed::operator + (const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(this->_fixed + fixed.getRawBits());
    return (tmp);
}

Fixed Fixed::operator - (const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(this->_fixed - fixed.getRawBits());
    return (tmp);
}

Fixed Fixed::operator * (const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(((long)this->_fixed * (long)fixed.getRawBits()) >> this->_litt);
    return (tmp);
}

Fixed Fixed::operator / (const Fixed &fixed) const
{
    if (fixed._fixed != 0)
    {
        Fixed tmp;
        tmp.setRawBits((this->_fixed << this->_litt) / fixed.getRawBits());
        return (tmp);
    }
    return (0);
    
}

Fixed Fixed::operator ++(int)
{
    Fixed tmp(*this);
    operator++();
    return(tmp);
}

Fixed Fixed::operator ++()
{
    this->_fixed++;
    return (*this);
}

Fixed Fixed::operator --(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed Fixed::operator --()
{
    this->_fixed--;
    return (*this);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
    return (x < y ? x : y);
}

const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
    return (x < y ? x : y);
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
    return (x > y ? x : y);
}

const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
    return (x > y ? x : y);
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
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



