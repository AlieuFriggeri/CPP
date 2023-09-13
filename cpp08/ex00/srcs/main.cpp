#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include "../headers/easyfind.hpp"


int main( void ) {
	std::list<char> l;

	l.push_back('c');
	l.push_back('a');
	l.push_back('h');
	l.push_back('g');
	l.push_back('3');
	l.push_back('*');

	char res = easyfind(l, 23);
	std::cout << *std::find(l.begin(), l.end(), 23) << std::endl;
	std::cout << res << std::endl;
	res = easyfind(l, 42);
	std::cout << *std::find(l.begin(), l.end(), 42) << std::endl;
	std::cout << res << std::endl;
}