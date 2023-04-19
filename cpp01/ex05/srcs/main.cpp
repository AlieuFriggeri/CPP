#include "../headers/Harl.hpp"

int main(int ac, char **av){
	
	Harl harl;
	if (ac != 2 || !av)
	{
		std::cout << "Argument cannot be eempty, usage: <program> (DEBUG/INFO/WARNING/ERROR)" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}