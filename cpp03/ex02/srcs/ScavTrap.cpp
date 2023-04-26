#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	this->name = "Unidentified ScavTrap";
	std::cout << "Scavtrap constructor called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	std::cout << "Scavtrap constructor called for " << this->name << std::endl;	
}

ScavTrap::ScavTrap(ScavTrap const &src){
	*this = src;
	std::cout << "Scavtrap copy constructor called for " << this->name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor for " << this->name << " called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src){
	if (this != &src)
		*this = src;
	return *this;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->name << " has entered GateKeeper mode" << std::endl;
}