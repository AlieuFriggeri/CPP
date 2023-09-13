#include "Span.hpp"

// Constructors
Span::Span(unsigned int n) : _limit(n)
{

}

Span::Span(const Span &copy)
{
	(void) copy;
}


// Destructor
Span::~Span()
{
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

void Span::addNumber(int n)
{
	if (_limit <= _lst.size())
		throw limitexception();
	_lst.push_back(n);
}

int Span::longestSpan(void)
{
	if (_lst.size() <= 1)
		return (-123);
	return (*std::max_element(_lst.begin(), _lst.end()) - *std::min_element(_lst.begin(), _lst.end()));
	
}

int Span::shortestSpan(void)
{
	int min = 2147483647;
	std::list<int>::iterator j = _lst.begin();
	for (std::list<int>::iterator i = _lst.begin(); i != _lst.end(); i++)
	{
		if (i != _lst.begin())
		{
			std::cout << *j << " && " << *i << std::endl;
			*j = *i - 1;
			if (*j - *i < min)
			{
				if (*j > *i)
					min = *j - *i;
				else
					min = *i - *j;
			}
			j++;
		}
	}
	
	return min;
}