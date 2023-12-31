#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _fixedPointValue(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->_fixedPointValue = rhs.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member function called" << std::endl;
  this->_fixedPointValue = raw;
}
