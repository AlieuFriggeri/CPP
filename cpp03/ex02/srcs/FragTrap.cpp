#include "../headers/FragTrap.hpp"

FragTrap::FragTrap(){
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	this->name = "Unidentified FragTrap";
	std::cout << "Fragtrap constructor called for " << this->name << std::endl;
}

FragTrap::FragTrap(std::string name){
	this->name = name;
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	std::cout << "Fragtrap constructor called for " << this->name << std::endl;	
}

FragTrap::FragTrap(FragTrap const &src){
	*this = src;
	std::cout << "Fragtrap copy constructor called for " << this->name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor for " << this->name << " called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void FragTrap::highFivesGuys(void){
	std::cout <<"FragTrap " << this->name << " is asking for a high five!!!!!!!!!!!!" << std::endl;
}