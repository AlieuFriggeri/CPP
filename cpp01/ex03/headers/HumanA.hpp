#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA {
	Weapon &arme;
	std::string name;
	public:
	HumanA(std::string name, Weapon &newWeapon);
	~HumanA(void);
	void attack(void);
};

#endif