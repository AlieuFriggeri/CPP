#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#pragma once

#include "../headers/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    ~ScavTrap();
    ScavTrap & operator=(ScavTrap const &src);
    void guardGate(void);
private:
};

#endif