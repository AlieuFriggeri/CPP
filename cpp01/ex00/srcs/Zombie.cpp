#include "../headers/Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Zombie constructor called" << std::endl;
	this->name = "defaultZombie";
}

Zombie::~Zombie(void){
	std::cout << "Zombie destructor called" << std::endl;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
