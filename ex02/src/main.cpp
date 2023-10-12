#include <iostream>
#include "Fixed.hpp"

int main(void)
{
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  Fixed const c( Fixed( 10.1f ) / Fixed( 2 ) );
  std::cout << "Arithmetic Operators" << std::endl;
  std::cout << "5.05f * 2 = " << b << std::endl;
  std::cout << "10.1f / 2 = " << c << std::endl;
  std::cout << "10.1f + 2 = " << Fixed( 10.1f ) + Fixed( 2 ) << std::endl;
  std::cout << "10.1f - 2 = " << Fixed( 10.1f ) - Fixed( 2 ) << std::endl;
  std::cout << "Comparison Operators" << std::endl;
  std::cout << "10.1f > 2 = " << ( Fixed( 10.1f ) > Fixed( 2 ) ) << std::endl;
  std::cout << "10.1f < 2 = " << ( Fixed( 10.1f ) < Fixed( 2 ) ) << std::endl;
  std::cout << "10.1f >= 2 = " << ( Fixed( 10.1f ) >= Fixed( 2 ) ) << std::endl;
  std::cout << "10.1f <= 2 = " << ( Fixed( 10.1f ) <= Fixed( 2 ) ) << std::endl;
  std::cout << "10.1f == 2 = " << ( Fixed( 10.1f ) == Fixed( 2 ) ) << std::endl;
  std::cout << "10.1f != 2 = " << ( Fixed( 10.1f ) != Fixed( 2 ) ) << std::endl;
  std::cout << "2 > 10.1f = " << ( Fixed( 2 ) > Fixed( 10.1f ) ) << std::endl;
  std::cout << "2 < 10.1f = " << ( Fixed( 2 ) < Fixed( 10.1f ) ) << std::endl;
  std::cout << "2 >= 10.1f = " << ( Fixed( 2 ) >= Fixed( 10.1f ) ) << std::endl;
  std::cout << "2 <= 10.1f = " << ( Fixed( 2 ) <= Fixed( 10.1f ) ) << std::endl;
  std::cout << "2 == 10.1f = " << ( Fixed( 2 ) == Fixed( 10.1f ) ) << std::endl;
  std::cout << "2 != 10.1f = " << ( Fixed( 2 ) != Fixed( 10.1f ) ) << std::endl;
  std::cout << "10.1f > 10.1f = " << ( Fixed( 10.1f ) > Fixed( 10.1f ) ) << std::endl;
  std::cout << "10.1f < 10.1f = " << ( Fixed( 10.1f ) < Fixed( 10.1f ) ) << std::endl;
  std::cout << "10.1f >= 10.1f = " << ( Fixed( 10.1f ) >= Fixed( 10.1f ) ) << std::endl;
  std::cout << "10.1f <= 10.1f = " << ( Fixed( 10.1f ) <= Fixed( 10.1f ) ) << std::endl;
  std::cout << "10.1f == 10.1f = " << ( Fixed( 10.1f ) == Fixed( 10.1f ) ) << std::endl;
  std::cout << "10.1f != 10.1f = " << ( Fixed( 10.1f ) != Fixed( 10.1f ) ) << std::endl;
  std::cout << "Increment and Decrement Operators" << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "++a = " << ++a << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "a++ = " << a++ << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "--a = " << --a << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "a-- = " << a-- << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "min and max function overload" << std::endl;
  std::cout << "Max(10.1f, 2) = " << Fixed::max( Fixed( 10.1f ), Fixed( 2 ) ) << std::endl;
  std::cout << "Min(10.1f, 2) = " << Fixed::min( Fixed( 10.1f ), Fixed( 2 ) ) << std::endl;
  std::cout << "Max(2, 10.1f) = " << Fixed::max( Fixed( 2 ), Fixed( 10.1f ) ) << std::endl;
  std::cout << "Min(2, 10.1f) = " << Fixed::min( Fixed( 2 ), Fixed( 10.1f ) ) << std::endl;
  return 0;
}
