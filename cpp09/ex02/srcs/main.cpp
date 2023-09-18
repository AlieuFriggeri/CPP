#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
#include <fstream>
#include "../headers/PmergeMe.hpp"

int main( int ac, char **av ) {

	(void)av;
	(void)ac;
	std::list<int> lst;
	std::vector<int> vct;
	lst.push_back(1);
	lst.push_back(12);
	lst.push_back(133);
	lst.push_back(144);
	vct.push_back(7);
	vct.push_back(4);
	vct.push_back(52);
	vct.push_back(314);
	std::list<int> res ;
	std::cout << "*" << std::endl;
	std::merge(lst.begin(), lst.end(), vct.begin(), vct.end(), res.begin());
	for (std::list<int>::iterator i = res.begin(); i != res.end(); i++)
	{
		std::cout << *i << std::endl;
		std::cout << "*" << std::endl;
	}
	
}