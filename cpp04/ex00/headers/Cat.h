#ifndef CAT_H
#define CAT_H

#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
    //Cat(std::string type);
    Cat(void);
    Cat(Cat const &src);
    ~Cat();
    Cat &operator=(Cat const &src);
    virtual void  makeSound(void) const;
    std::string getType() const;
private:
    
};

#endif