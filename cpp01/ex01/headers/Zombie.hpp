#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string.h>
#include <cstdlib>

class Zombie{
	
	std::string	name;
	public:
	void announce(void);
	Zombie(void);
	~Zombie(void);
	Zombie *zombieHorde(int N, std::string name);
};

#endif