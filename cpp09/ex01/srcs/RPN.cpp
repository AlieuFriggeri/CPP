#include "RPN.hpp"

RPN::RPN(void)
{

}

RPN::RPN(RPN &src) : _numbers(src._numbers), _operator(src._operator)
{

}

RPN::~RPN(void)
{

}

RPN &RPN::operator=(RPN const &src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void RPN::setStack(std::string arg)
{
	_operator = "";
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (isdigit(arg[i]))
			_numbers.push(arg[i] - '0');
		else if (isToken(arg[i]) != '0')
		{
			if (_numbers.size() <= 1)
			{
				std::cout << "Error: bad token placement" << std::endl;
				exit(1);
			}
			process(arg[i]);
		}
		else if (isspace(arg[i]) == 0)
		{
			std::cout << "Error: invalid character" << std::endl;
			exit(1);
		}
	}
	std::cout << _numbers.top() << std::endl;
}

char RPN::isToken(char c)
{
	if (c == '/')
		return '/';
	else if (c == '-')
		return '-';
	else if (c == '+')
		return '+';
	else if (c == '*')
		return '*';
	else
		return '0';
}

void RPN::process(char c)
{
	int x = _numbers.top();
	_numbers.pop();
	int y = _numbers.top();
	_numbers.pop();

	_numbers.push(operation(x, y, c));
}

int RPN::operation(int x, int y, char c)
{
	if (c == '*')
		return y * x;
	else if (c == '+')
		return y + x;
	else if (c == '/')
		return y / x;
	else if (c == '-')
		return y - x;
	return 0;
}