#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once
#include <iostream>

class Animal
{
public:
	//Animal(std::string type);
	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal();
	Animal &operator=(Animal const &src);
	virtual void	makeSound(void) const = 0;
	std::string getType() const;
protected:
	std::string type;
};

#endif