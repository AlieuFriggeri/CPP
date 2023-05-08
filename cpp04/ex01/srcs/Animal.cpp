#include "../headers/Animal.h"

// Animal::Animal(std::string type)
// {
// 	this->type = type;
// 	std::cout << "Animal " << this->type << " constructor called" << std::endl;
// }

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal " << "constructor called" << std::endl;
}

Animal::Animal(Animal const &src){
	*this = src;
	std::cout << "Animal " << "copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << "destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void Animal::makeSound(void) const{
	std::cout << "**Animal Noises**" << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}