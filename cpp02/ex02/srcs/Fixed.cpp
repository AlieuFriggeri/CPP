#include "../headers/Fixed.hpp"


Fixed::Fixed(void) : nb(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const src){
	std::cout << "Int constructor called" << std::endl;
	this->nb = (src << Fixed::frac);
}

Fixed::Fixed(float const src){
	std::cout << "Float constructor called" << std::endl;
	this->nb = roundf(src * (1 << this->frac));
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits function called" << std::endl;
	return this->nb;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function called" << std::endl;
	this->nb = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->nb / (float)(1 << this->frac));
}

int Fixed::toInt(void) const{
	return (this->nb >> this->frac);
}

Fixed Fixed::min(Fixed &lhs, Fixed &rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else 
		return (lhs);
}

Fixed Fixed::min(const Fixed & lhs, const Fixed & rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else 
		return (lhs);
}

Fixed Fixed::max(Fixed &lhs, Fixed &rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else 
		return (rhs);
}

Fixed Fixed::max(const Fixed &lhs, const Fixed &rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else 
		return (rhs);
}

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->nb = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &rhs){
	float a = this->toFloat();
	float b = rhs.toFloat();
	if (a > b)
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const &rhs){
	float a = this->toFloat();
	float b = rhs.toFloat();
	if (a >= b)
		return true;
	else
		return false;
}

bool Fixed::operator<(Fixed const &rhs){
	float a = this->toFloat();
	float b = rhs.toFloat();
	if (a < b)
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const &rhs){
	float a = this->toFloat();
	float b = rhs.toFloat();
	if (a <= b)
		return true;
	else
		return false;
}

bool Fixed::operator==(Fixed const &rhs){
	float a = this->toFloat();
	float b = rhs.toFloat();
	if (a == b)
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const &rhs){
	float a = this->toFloat();
	float b = rhs.toFloat();
	if (a != b)
		return true;
	else
		return false;
}

Fixed Fixed::operator+(Fixed const &rhs){
	Fixed res(*this);

	res.setRawBits(this->getRawBits() + rhs.getRawBits());
	return res;
}

Fixed Fixed::operator-(Fixed const &rhs){
	Fixed res(*this);

	res.setRawBits(this->getRawBits() - rhs.getRawBits());
	return res;
}

Fixed Fixed::operator*(Fixed const &rhs){
	Fixed res(*this);
	long tmp, tmp2;

	tmp = (long)this->getRawBits();
	tmp2 = (long)rhs.getRawBits();

	res.setRawBits((tmp * tmp2) / (1 << this->frac));
	return res;
}

Fixed Fixed::operator/(Fixed const &rhs){
	Fixed res(*this);
	long tmp, tmp2;

	tmp = (long)this->getRawBits();
	tmp2 = (long)rhs.getRawBits();

	res.setRawBits((tmp * (1 << this->frac)) / tmp2);
	return res;
}

Fixed Fixed::operator++(void){
	this->nb++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed res(*this);

	operator++();
	return res;
}

Fixed Fixed::operator--(void){
	this->nb--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed res(*this);

	operator--();
	return res;
}

std::ostream & operator<<(std::ostream & o, Fixed const & src){
	o << src.toFloat();

	return o;
}