#include "../headers/HumanA.hpp"
#include "../headers/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : arme(newWeapon), name(name){

}

HumanA::~HumanA(void){

}

void HumanA::attack(void){
	std::cout << this->name << " attacks with their " << this->arme.getType() << std::endl;
}