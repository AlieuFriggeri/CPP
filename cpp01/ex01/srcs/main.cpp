#include <iostream>
#include <string.h>
#include <cstdlib>
#include "../headers/Zombie.hpp"

int main(){
	Zombie *horde = NULL;
	horde = horde->zombieHorde(8, "franciss");
	std::cout << "next" <<std::endl;
	horde[2].announce();
	delete horde;
	return (0);
}