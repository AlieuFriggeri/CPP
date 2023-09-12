#include "ScalarConverter.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>

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
	if (isChar(input) == true)
		return;
	else if (isInt(input) == true)
		return;
	else if (isfd(input) == true)
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
	printVal();
	return true;
}

bool	ScalarConverter::isfd(std::string input)
{
	int point = 0;
	std::cout << "isfd" << std::endl;
	for(size_t i = 0; i < input.length() - 1; i++)
	{
		if (input.at(input.length() - 1) == 'f' && i == input.length() - 1)
		{
			ftoi(input);
			return true;
		}
		if (isdigit(input[i]) == false && (point == 1 && input[i] == '.'))
			return false;
	}

	if (ftoi(input) == true)
	{
		_possible = true;
		_n = static_cast<int>(_f);
		_d = static_cast<double>(_f);
		_c = static_cast<char>(_f);
	}
	else
	{
		_possible = true;
		_f = static_cast<int>(_d);
		_n = static_cast<double>(_d);
		_c = static_cast<char>(_d);
	}
	printVal();
	return true;
}

bool ScalarConverter::ftoi(std::string input)
{
	std::cout << "ftoi" << std::endl;
	if (input.at(input.length() - 1) == 'f')
		{
			_f = atof(input.c_str());
			std::cout << _f << "f" <<  std::endl;
			return true;
		}
	else
		{
			_d = atof(input.c_str());
			std::cout << _d << std::endl;
			return false;
		}
	/* int c = 0;
	double res = 0;
	for (size_t i = 0; i < input.length() - 1; i++)
	{
		c++;
		if (input.at(i) == '.')
		{
			c++;
			break;
		}
		res = res*10 + atoi(input.c_str() + i);
		std::cout << res << std::endl;
	}
	float res2 = 0;
	for (size_t i = c; i < input.length(); i++)
	{
		res2 += res2 * 10 +atoi(input.c_str() + i);
		c++;
	}
	res2 *= pow(10, c * -1);
	double ret = res + res2;
	std::cout << "ret is: " << ret << std::endl; */
	return true;
}

bool ScalarConverter::isChar(std::string input)
{
	if (input.length() != 1)
		return false;
	_c = input[0];
	_possible = true;
	_n = static_cast<int>(_c);
	_d = static_cast<double>(_c);
	_f = static_cast<float>(_c);
	printVal();
	return true;
}

void ScalarConverter::printVal(void)
{
	std::cout << "int: "<< _n << std::endl;
	std::cout << "float: "<< _f << "f" << std::endl;
	std::cout << "double: "<< _d << std::endl;
	if (isprint(_c) != 0)
		std::cout << "'" <<_c << "'" << std::endl;
	else
		std::cout << "non printable char" << std::endl;
}