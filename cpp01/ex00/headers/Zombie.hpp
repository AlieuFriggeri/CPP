#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string.h>
#include <cstdlib>

class Zombie{
	
	std::string	name;
	public:
	void	randomChump(std::string name);
	Zombie *newZombie(std::string name);
	void announce(void);
	Zombie(void);
	~Zombie(void);

};

#endif