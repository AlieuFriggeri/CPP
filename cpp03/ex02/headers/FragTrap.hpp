#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#pragma once

#include "../headers/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    ~FragTrap();
    FragTrap & operator=(FragTrap const &src);
    void highFivesGuys(void);
private:

};

#endif