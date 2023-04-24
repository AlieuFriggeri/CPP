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

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->nb = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & src){
	o << src.toFloat();

	return o;
}