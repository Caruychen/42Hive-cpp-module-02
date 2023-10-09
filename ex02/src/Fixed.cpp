#include "Fixed.hpp"
#include <cmath>

/* Constructors and Destructors */

Fixed::Fixed(void): _fixedPointValue(0)
{}

Fixed::Fixed(const int value)
{
  this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
  this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
  this->operator=(other);
}

Fixed::~Fixed(void)
{}

/* Operators Overload */

Fixed &Fixed::operator=(const Fixed &rhs)
{
  this->_fixedPointValue = rhs.getRawBits();
  return (*this);
}

bool  Fixed::operator>(const Fixed &rhs) const
{
  return (this->_fixedPointValue > rhs.getRawBits());
}

bool  Fixed::operator<(const Fixed &rhs) const
{
  return (this->_fixedPointValue < rhs.getRawBits());
}

bool  Fixed::operator>=(const Fixed &rhs) const
{
  return (this->_fixedPointValue >= rhs.getRawBits());
}

bool  Fixed::operator<=(const Fixed &rhs) const
{
  return (this->_fixedPointValue <= rhs.getRawBits());
}

bool  Fixed::operator==(const Fixed &rhs) const
{
  return (this->_fixedPointValue == rhs.getRawBits());
}

bool  Fixed::operator!=(const Fixed &rhs) const
{
  return (this->_fixedPointValue != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
  return (Fixed(this->_fixedPointValue + rhs.getRawBits()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
  return (Fixed(this->_fixedPointValue - rhs.getRawBits()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
  long  left = (long) this->_fixedPointValue;
  long  right = (long) rhs.getRawBits();
  Fixed result;

  result.setRawBits((left * right) >> this->_fractionalBits);
  return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
  long  left = (long) this->_fixedPointValue << this->_fractionalBits;
  long  right = (long) rhs.getRawBits();
  Fixed result;

  result.setRawBits((left / right));
  return (result);
}

Fixed &Fixed::operator++(void)
{
  ++this->_fixedPointValue;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);
  ++(*this);
  return (tmp);
}

/* Member Functions */

int Fixed::getRawBits(void) const
{
  return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
  this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
  return ((float) this->_fixedPointValue / (1 << this->_fractionalBits));
}

int   Fixed::toInt(void) const
{
  return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &rhs)
{
  out << rhs.toFloat();
  return (out);
}
