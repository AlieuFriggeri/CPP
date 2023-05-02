#include "../headers/Dog.h"

// Dog::Dog(std::string type)
// {
// 	this->type = type;
// 	std::cout << "Dog " << this->type << " constructor called" << std::endl;
// }

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog " << "constructor called" << std::endl;
}

Dog::Dog(Dog const &src){
	*this = src;
	std::cout << "Dog " << "copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << "destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "**WOOF**" << std::endl;
}

std::string Dog::getType() const{
	return this->type;
}