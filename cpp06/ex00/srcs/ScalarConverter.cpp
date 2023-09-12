#include "ScalarConverter.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>

// Constructors
ScalarConverter::ScalarConverter() 
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
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
	//std::cout << "convert" << std::endl;
}

void ScalarConverter::identify(std::string input)
{	
	if (isLiteral(input) == true)
		return;
	else if (isChar(input) == true)
		return;
	else if (isInt(input) == true)
		return;
	else if (isfd(input) == true)
		return;
	//std::cout << "identify" << std::endl;	
}
bool ScalarConverter::isInt(std::string input)
{
	for (size_t i = 0; i < input.length() - 1; i++)
	{
		if (isdigit(input[i]) == false)
			return false;
	}
	_n = atoi(input.c_str());
	_d = strtod(input.c_str(), NULL);
	if (_d > 2147483647 || _d < -2147483648)
		_intOverflow = true;
	if (_d > std::numeric_limits<float>::max())
		_floatOverflow = true;
	if (_intOverflow == false)
	{
		_possible = true;
		_f = static_cast<float>(_n);
		_d = static_cast<double>(_n);
		_c = static_cast<char>(_n);
	}
	else
	{
		_possible = true;
		_f = static_cast<float>(_d);
		_n = 0;
		_c = static_cast<char>(_d);
	}
	printVal();
	return true;
}

bool	ScalarConverter::isfd(std::string input)
{
	int point = 0;
	//std::cout << "isfd" << std::endl;
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
		_f = static_cast<float>(_d);
		_n = static_cast<double>(_d);
		_c = static_cast<char>(_d);
	}
	printVal();
	return true;
}

bool ScalarConverter::ftoi(std::string input)
{
	//std::cout << "ftoi" << std::endl;
	if (input.at(input.length() - 1) == 'f')
		{
			_f = strtof(input.c_str(), NULL);
			//std::cout << _f << "f" <<  std::endl;
			return true;
		}
	else
		{
			_d = strtod(input.c_str(), NULL);
			//std::cout << _d << std::endl;
			return false;
		}
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

bool ScalarConverter::isLiteral(std::string input)
{
	if (input.compare("nan") == 0)
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		std::cout << "char: Impossible" << std::endl;
		return true;
	}
	else if (input.compare("-inf") == 0)
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		std::cout << "char: Impossible" << std::endl;
		return true;
	}
	else if (input.compare("+inf") == 0 || input.compare("inf") == 0)
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		std::cout << "char: Impossible" << std::endl;
		return true;
	}
	return false;
}

void ScalarConverter::printVal(void)
{
	if (_intOverflow == true || _d > 2147483647 || _d < -2147483648)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: "<< _n << std::endl;
	std::cout << std::fixed;
	if (_floatOverflow == true)
		std::cout << "float: overflow" << std::endl;
	else
		std::cout << "float: " << std::setprecision(3) << _f << "f" << std::endl;
	std::cout << "double: "<< std::setprecision(3) << _d << std::endl;
	if (isprint(_c) != 0 && _n >= 0 && _n <= 127)
		std::cout << "char: " << "'" <<_c << "'" << std::endl;
	else
		std::cout << "char: non printable char" << std::endl;
}