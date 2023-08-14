#include "../headers/Harl.hpp"

int main(int ac, char **av){
	
	Harl harl;
	if (ac != 2 || !av)
	{
		if (ac > 2)
			std::cout << "Too much Argument ,usage: ./<program> (DEBUG/INFO/WARNING/ERROR)" << std::endl;
		else
			std::cout << "Argument cannot be empty, usage: ./<program> (DEBUG/INFO/WARNING/ERROR)" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}