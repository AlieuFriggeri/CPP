#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
#include <fstream>
#include "../headers/RPN.hpp"

int main( int ac, char **av ) {

	RPN rpn;
	if (ac != 2)
	{
		std::cout << "Error: usage: ./rpn <EXPRESSION>" << std::endl;
		return 1;
	}
	rpn.setStack(av[1]);
	return 0;
}