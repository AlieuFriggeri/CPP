#include <iostream>
#include <exception>
#include <string>
#include <limits>
#include "../headers/ScalarConverter.hpp"

int main(int ac, char **av)
{
	ScalarConverter conv;
	if (ac != 2)
	{
		std::cout << "please enter 1 argument" << std::endl;
		return 1;
	}
	//(void)av;
	//std::cout << std::numeric_limits<float>::max() << std::endl;
	conv.convert(av[1]);
	//std::cout << "main" << std::endl;
/* 	int x = 0;
	
	char c = static_cast <char>(x);
	float f = static_cast <float>(x);
	double d = static_cast <double>(x);
	int i = static_cast <int>(x);
	std::cout << c << std::endl;
	std::cout << f << std::endl;
	std::cout << d << std::endl;
	std::cout << i << std::endl; */
	return 0;
}