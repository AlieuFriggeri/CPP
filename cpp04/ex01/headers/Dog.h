#ifndef DOG_H
#define DOG_H

#pragma once
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
public:
    //Dog(std::string type);
    Dog(void);
    Dog(Dog const &src);
    //~Dog();
    ~Dog();
    Dog &operator=(Dog const &src);
    virtual void  makeSound(void) const;
    std::string  getType() const;
private:
    Brain *brain;
};

#endif