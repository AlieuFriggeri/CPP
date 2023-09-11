#include <iostream>
#include <exception>
#include <string>
#include "../headers/ScalarConverter.hpp"

int main(int ac, char **av)
{
	ScalarConverter conv;
	(void)ac;
	//(void)av;
	conv.convert(av[1]);
	std::cout << "main" << std::endl;
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