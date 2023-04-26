#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"

int main (){
	ClapTrap pelo("pelo");
	ClapTrap bob("bob");
	ClapTrap issou;
	ScavTrap roger("roger");
	
	roger.printStats();
	roger.guardGate();
	pelo.attack("bob");
	bob.takeDamage(2);
	issou.beRepaired(5);
	
	return 0;
}