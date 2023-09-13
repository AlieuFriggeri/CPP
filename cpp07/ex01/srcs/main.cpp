#include <iostream>
#include <string>
#include "../headers/iter.hpp"

// int add(int x)
// {
// 	return x + 1;
// }

// char addc(char c)
// {
// 	return c + 1;
// }

int main( void ) {
	// int (*fptr)(int) = &add;
	// char (*cptr)(char) = &addc;

	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

	iter(a, 10, &add);
	iter(c, 6, &add);

	return (0);
}