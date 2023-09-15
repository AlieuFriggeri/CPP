#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <fstream>
#include "../headers/BitcoinExchange.hpp"

int main( int ac, char **av ) {
	Bitcoin btc;

	if (ac != 2)
	{
		std::cout << "Error: bad arguments, usage: ./btc <FILE>" << std::endl;
		exit(1);
	}
	btc.setMap("data.csv");
	btc.setInput(av[1]);
	// btc.printInput();
	return 0;
}