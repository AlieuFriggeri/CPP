#include <iostream>
#include <string>
#include "../headers/whatever.hpp"

int main()
{
	int x = 2;
	int y = 4;

	swap(x ,y);
	std::cout << min(x, y) << std::endl;
	std::cout << max(x, y) << std::endl;
	return 0;
}