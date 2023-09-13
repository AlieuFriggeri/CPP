#include <iostream>
#include <string>
#include "../headers/Array.hpp"

// int add(int x)
// {
// 	return x + 1;
// }

// char addc(char c)
// {
// 	return c + 1;
// }

int main( void ) {
	Array<char> x(3);
	Array<char> y;
	Array<char> z(x);

	x[2] = '&';
	try
	{
		std::cout << x[2] << std::endl;
		std::cout << x[3] << std::endl;
	}
	catch(const Array<char>::OOBexception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}