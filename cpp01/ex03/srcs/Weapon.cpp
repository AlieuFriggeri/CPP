#include "../headers/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void){

}

void Weapon::setType(std::string newType){
	this->type = newType;
}

std::string& Weapon::getType(){
	return (this->type);
}