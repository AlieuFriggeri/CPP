#include "../headers/ClapTrap.hpp"

int main (){
	ClapTrap pelo("pelo");
	ClapTrap bob("bob");
	ClapTrap issou;

	pelo.attack("bob");
	bob.takeDamage(2);
	issou.beRepaired(5);
	
	return 0;
}