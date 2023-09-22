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
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
 		sp.addNumber(8);
	}
	catch (Span::limitexception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sp2 = Span(25000);
	try
	{
		sp2.addNumbers(25000);
		std::cout << "25k numbers added to span" << std::endl;
		sp2.addNumber(18);
	}
	catch(Span::limitexception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	return 0;
}