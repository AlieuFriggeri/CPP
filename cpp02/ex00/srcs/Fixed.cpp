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

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->nb = rhs.getRawBits();
	return *this;
}