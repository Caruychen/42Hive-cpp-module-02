#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{}

Point::~Point(void)
{}

Point &Point::operator=(const Point &rhs)
{
  (void) rhs;
  return (*this);
}

const Fixed &Point::getX(void) const
{
  return (_x);
}

const Fixed &Point::getY(void) const
{
  return (_y);
}

float Point::getXf(void) const
{
  return (_x.toFloat());
}

float Point::getYf(void) const
{
  return (_y.toFloat());
}

std::ostream &operator<<(std::ostream &out, const Point &rhs)
{
  out << "(" << rhs.getX() << ", " << rhs.getY() << ")";
  return (out);
}
