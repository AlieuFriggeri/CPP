#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	Weapon arme;
	std::string name;
	public:
	HumanB(std::string name);
	~HumanB(void);
	void attack(void);
	void setWeapon(Weapon newArme);
};

#endif