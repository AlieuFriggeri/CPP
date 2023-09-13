#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include "../headers/Span.hpp"


int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(23);
		sp.addNumber(123);
	}
	catch(const Span::limitexception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}