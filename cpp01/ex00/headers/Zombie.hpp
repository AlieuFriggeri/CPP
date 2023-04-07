#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string.h>
#include <cstdlib>

class Zombie{
	
	std::string	name;
	public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	Zombie *newZombie(std::string name);
	void	randomChump(std::string name);
};

#endif