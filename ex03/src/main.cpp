#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool  bsp(Point const a, Point const b, Point const c, Point const point);

static void  testPoint(Point const a, Point const b, Point const c, Point const point)
{
  std::cout << "Testing Point" << point << ": " << bsp(a, b, c, point) << std::endl;
}

int main(void)
{
  Point a = Point(-5, 1);
  Point b = Point(3, -5);
  Point c = Point(5, 2);
  Point p1 = Point(0, 0);
  Point p2 = Point(1, 1);
  Point p3 = Point(2, 2);

  std::cout << "Triangle: " << a << " " << b << " " << c << std::endl;
  testPoint(a, b, c, p1);
  testPoint(a, b, c, p2);
  testPoint(a, b, c, p3);
  return 0;
}
