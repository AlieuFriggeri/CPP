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
