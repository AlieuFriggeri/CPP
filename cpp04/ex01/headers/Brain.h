#ifndef BRAIN_H
#define BRAIN_H

#pragma once
#include <iostream>

class Brain
{
public:
    Brain();
    Brain(Brain const &src);
    Brain &operator=(Brain const &src);
    ~Brain();

protected:
    std::string ideas[100];
};

#endif