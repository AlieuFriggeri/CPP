#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	this->name = name;
	std::cout << "Claptrap " << this->name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap() : Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	this->name = "Unidentified Robot";
	std::cout << "Claptrap " << this->name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	*this = src;
	std::cout << "Claptrap " << this->name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << this->name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	this->Energypoints--;
	std::cout << "Claptrap " << this->name << " attacks " << target << " causing " <<
		this->Attackdamage << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	this->Hitpoints += amount;
	this->Energypoints--;
	std::cout << "Claptrap " << this->name << " repairs himself " << amount << " HP and now have " << this->Hitpoints << " HP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->Hitpoints -= amount;
	std::cout << "Claptrap " << this->name << " take " << amount << " damage and now have " << this->Hitpoints << " HP" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src){
	if (this != &src)
		*this = src;
	return *this;
}