#ifndef DOG_H
#define DOG_H

#pragma once
#include "Animal.h"

class Dog : virtual public Animal
{
public:
    //Dog(std::string type);
    Dog(void);
    Dog(Dog const &src);
    ~Dog();
    Dog &operator=(Dog const &src);
    virtual void  makeSound(void) const;
    std::string  getType() const;
};

#endif