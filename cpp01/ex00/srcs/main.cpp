#include <iostream>
#include <string.h>
#include <cstdlib>
#include "../headers/Zombie.hpp"

int main(){
	Zombie Zombie, Zombie2, Zombie3;

	Zombie.announce();
	Zombie2.newZombie("karl");
	Zombie2.announce();
	Zombie3.randomChump("fred");
	Zombie3.announce();
	return (0);
}