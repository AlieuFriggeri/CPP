#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	std::string type;
	public:
	const std::string& getType();
	void setType(std::string newType);
	Weapon(std::string type);
	~Weapon(void);
};

#endif