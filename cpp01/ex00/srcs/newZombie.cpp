#include "../headers/Zombie.hpp"

Zombie *Zombie::newZombie(std::string name){
	this->name = name;
	return (this);
}
