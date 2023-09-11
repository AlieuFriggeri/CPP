#include "ScalarConverter.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

// Constructors
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
}


// Destructor
ScalarConverter::~ScalarConverter()
{
}


// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}

void ScalarConverter::convert(std::string input)
{
	identify(input);
	std::cout << "convert" << std::endl;
}

void ScalarConverter::identify(std::string input)
{	
	if (isInt(input) == true)
		return;
	std::cout << "identify" << std::endl;	
}
bool ScalarConverter::isInt(std::string input)
{
	for (size_t i = 0; i < input.length() - 1; i++)
	{
		if (isdigit(input[i]) == false)
			return false;
	}
	_n = atoi(input.c_str());
	std::cout << "isInt" << std::endl;
	_possible = true;
	_f = static_cast<float>(_n);
	_d = static_cast<double>(_n);
	_c = static_cast<char>(_n);
	std::cout << "int: "<< _n << std::endl;
	std::cout << "float: "<< _f << ".0f" << std::endl;
	std::cout << "double: "<< _d << ".0" << std::endl;
	if (_c > 0 && _c < 127)
		std::cout << "'" <<_c << "'" << std::endl;
	else
		std::cout << "non printable char" << std::endl;
	return true;
}