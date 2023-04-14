#include "../headers/Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
	this->type = newtype;
}

Weapon::~Weapon(void){

}

void Weapon::setType(std::string newType){
	this->type = newType;
}

const std::string& Weapon::getType(){
	return (this->type);
}