#include "../headers/WrongAnimal.h"

// WrongAnimal::WrongAnimal(std::string type)
// {
// 	this->type = type;
// 	std::cout << "WrongAnimal " << this->type << " constructor called" << std::endl;
// }

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal " << "constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
	*this = src;
	std::cout << "WrongAnimal " << "copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << "destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "**WrongAnimal Noises**" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}