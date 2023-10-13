#include "Point.hpp"

static float  area(const Point a, const Point b, const Point c)
{
  float area;

  area = (
    a.getXf() * (b.getYf() - c.getYf()) +
    b.getXf() * (c.getYf() - a.getYf()) +
    c.getXf() * (a.getYf() - b.getYf())
  ) / 2.0f;
  return (fabs(area));
}

bool  bsp(const Point a, const Point b, const Point c, const Point point)
{
  float triangle, pointAB, pointAC, pointBC;

  triangle = area(a, b, c);
  pointAB = area(point, a, b);
  pointAC = area(point, a, c);
  pointBC = area(point, b, c);

  if (pointAB == 0 || pointAC == 0 || pointBC == 0)
    return (false);
  return (triangle == (pointAB + pointAC + pointBC));
}
