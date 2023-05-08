#include "../headers/Brain.h"

Brain::Brain()
{
	std::cout << "Brain " << "constructor called" << std::endl;
}

Brain::Brain(Brain const &src){
	*this = src;
	std::cout << "Brain " << "copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain " << "destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &src){
	if (this != &src)
		*this = src;
	return *this;
}
