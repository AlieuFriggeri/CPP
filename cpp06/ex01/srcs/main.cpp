#include <iostream>
#include <string>
#include <cstdlib>
#include <stdint.h>
#include <Serializer.hpp>

int main()
{
	Data val;
	Serializer s;
	//uintptr_t ptr2;
	val.age = 18;
	val.name = "salop";
	std::cout << (Data *)s.serialize(&val) << std::endl;
	std::cout << s.deserialize(s.serialize(&val)) << std::endl;
	return 0;
}