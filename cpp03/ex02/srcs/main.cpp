#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"

int main (){
	ClapTrap pelo("pelo");
	ClapTrap issou;
	ScavTrap roger("roger");
	FragTrap benoit("benoit");
	
	roger.printStats();
	roger.guardGate();
	benoit.printStats();
	benoit.highFivesGuys();
	pelo.attack("bob");
	issou.beRepaired(5);
	
	return 0;
}