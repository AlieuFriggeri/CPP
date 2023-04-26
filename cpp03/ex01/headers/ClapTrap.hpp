#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#pragma once

#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name);
    ClapTrap(void);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap &operator=(ClapTrap const &src);
protected:
    std::string name;
    int Hitpoints;
    int Energypoints;
    int Attackdamage;
};

#endif