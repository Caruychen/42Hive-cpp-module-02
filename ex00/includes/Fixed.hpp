#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
  public:
    Fixed(void);
    Fixed(const Fixed &other);
    ~Fixed(void);
    Fixed &operator=(const Fixed &rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    int               _fixedPointValue;
    static const int  _fractional_bits = 8;
};

#endif
