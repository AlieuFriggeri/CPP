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
	static Fixed min(Fixed &lhs, Fixed &rhs) ;
	static Fixed min(const Fixed & lhs, const Fixed & rhs);
	static Fixed max(Fixed & lhs, Fixed & rhs);
	static Fixed max(const Fixed & lhs, const Fixed & rhs);
	Fixed & operator=(Fixed const &rhs);
	bool operator>(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);
	Fixed operator+(Fixed const &rhs);
	Fixed operator-(Fixed const &rhs);
	Fixed operator*(Fixed const &rhs);
	Fixed operator/(Fixed const &rhs);
	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif

