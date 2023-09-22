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
	_lst.sort();
	std::list<int>::iterator j = _lst.begin();
	for (std::list<int>::iterator i = _lst.begin(); i != _lst.end() ; i++)
	{
		if (i == _lst.end())
			break;
		if (i != _lst.begin() && i != _lst.begin()++)
		{
			if (*i - *j < min)
				min = *i - *j;
			j++;
		}
	}
	
	return min;
}

void Span::addNumbers(unsigned int range)
{
	srand(time(NULL));

	for (unsigned int i = 0; i < range; i++)
	{
		if (_lst.size() == _limit)
		{
			throw(limitexception());
			return;
		}
		addNumber(rand());
	}
	
}