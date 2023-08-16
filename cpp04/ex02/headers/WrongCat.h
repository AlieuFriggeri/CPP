#ifndef WRONGCAT_H
#define WRONGCAT_H

#pragma once
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
    //WrongCat(std::string type);
    WrongCat(void);
    WrongCat(WrongCat const &src);
    ~WrongCat();
    WrongCat &operator=(WrongCat const &src);
    virtual void  makeSound(void) const;
    std::string getType() const;
private:
    
};

#endif