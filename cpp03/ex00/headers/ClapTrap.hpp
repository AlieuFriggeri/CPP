#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#pragma once

#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name);
    ClapTrap(void);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string name;
    int Hitpoints;
    int Energypoints;
    int Attackdamage;
};

#endif