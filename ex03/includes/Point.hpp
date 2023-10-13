#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
  public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point &other);
    ~Point(void);
    Point &operator=(const Point &rhs);
    const Fixed &getX(void) const;
    const Fixed &getY(void) const;
    float getXf(void) const;
    float getYf(void) const;

  private:
    const Fixed _x;
    const Fixed _y;
};

std::ostream &operator<<(std::ostream &out, const Point &rhs);

#endif
