#include "../headers/Cat.h"

// Cat::Cat(std::string type)
// {
// 	this->type = type;
// 	std::cout << "Cat " << this->type << " constructor called" << std::endl;
// }

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat " <<"constructor called" << std::endl;
}

Cat::Cat(Cat const &src){
	*this = src;
	std::cout << "Cat " << "copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << "destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "**MIAOU**" << std::endl;
}

std::string Cat::getType() const{
	return this->type;
}