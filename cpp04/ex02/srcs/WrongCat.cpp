#include "../headers/WrongCat.h"

// WrongCat::WrongCat(std::string type)
// {
// 	this->type = type;
// 	std::cout << "WrongCat " << this->type << " constructor called" << std::endl;
// }

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat " <<"constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src){
	*this = src;
	std::cout << "WrongCat " << "copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << "destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void WrongCat::makeSound(void) const{
	std::cout << "**MIAOU**" << std::endl;
}

std::string WrongCat::getType() const{
	return this->type;
}