#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	int nb;
	static int const frac = 8;
	public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const src);
	Fixed(float const src);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed & operator=(Fixed const &rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif

