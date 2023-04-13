#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "adresse de string: " << &string << " | adresse de stringPTR: " << stringPTR << " | adresse de stringREF: " << &stringREF << std::endl;
	std::cout << "valeur de string: " << string << " | valeur de stringPTR: " << *stringPTR << " | valeur de stringREF: " << stringREF << std::endl;
	return (0);
}