#include "../headers/HumanB.hpp"
#include "../headers/Weapon.hpp"

HumanB::HumanB(std::string newname) : arme(NULL) {
	this->name = newname;
}

HumanB::~HumanB(void){

}

void HumanB::attack(void){
	std::cout << this->name << " attacks with their " << this->arme->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newArme){
	this->arme = &newArme;
}
