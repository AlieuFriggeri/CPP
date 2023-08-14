#include "../headers/HumanB.hpp"
#include "../headers/Weapon.hpp"

HumanB::HumanB(std::string newname) : arme(NULL) {
	this->name = newname;
}

HumanB::~HumanB(void){

}

void HumanB::attack(void){
	if (this->arme != NULL)
		std::cout << this->name << " attacks with their " << this->arme->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fist since they have no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &newArme){
	this->arme = &newArme;
}
