#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &other);
    ~Fixed(void);

    Fixed &operator=(const Fixed &rhs);
    bool  operator>(const Fixed &rhs) const;
    bool  operator<(const Fixed &rhs) const;
    bool  operator>=(const Fixed &rhs) const;
    bool  operator<=(const Fixed &rhs) const;
    bool  operator==(const Fixed &rhs) const;
    bool  operator!=(const Fixed &rhs) const;
    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed &rhs) const;
    Fixed operator*(const Fixed &rhs) const;
    Fixed operator/(const Fixed &rhs) const;

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int   toInt(void) const;

  private:
    int               _fixedPointValue;
    static const int  _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &rhs);

#endif
