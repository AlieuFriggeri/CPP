#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#pragma once
#include <iostream>

class WrongAnimal
{
public:
    //WrongAnimal(std::string type);
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal const &src);
    void    makeSound(void) const;
   std::string getType() const;
protected:
    std::string type;
};

#endif