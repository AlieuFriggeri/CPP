#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
#include <fstream>
#include <ctime>
#include "../headers/PmergeMe.hpp"

int main( int ac, char **av ) {

	PmergeMe a;
	std::string arr[ac - 1];
	std::list<long> list;
	std::vector<long> vector;
	//struct timespec startl, endl, startv, endv;
	clock_t startv, endv, startl, endl;
	int count = 0;

	if (ac < 3)
	{
		std::cout << "Error: please enter at least 2 arguments" << std::endl;
		return (1);
	}

	if (ac >= 11)
		count = 10;
	else
		count = ac - 1;

	for (int i = 1; i < ac; i++)
	{
		arr[i - 1] = std::string(av[i]);
	}
	std::cout << "Before: ";
	while(count > 0)
	{
		std::cout << av[count] << " ";
		count--;
	}
	std::cout << "[...]"<< std::endl;
	
	std::cout << "After: ";

	startl = clock();
	a.setList(arr, ac);
	list = a.mergeSort(a._numbers);
	endl = clock();
	startv = clock();
	a.setVector(arr, ac);
	vector = a.mergeSortVector(a._vnumbers);
	endv = clock();

	for (std::list<long>::iterator it = list.begin(); it != list.end(); it++)
	{
		if (count == 10)
			break;
		std::cout << *it << " ";
		count++;
	}
	std::cout << " [...]"<< std::endl;
	
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector = " << static_cast<double>(endv - startv) / CLOCKS_PER_SEC * 1000 << " us" << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::list = " << static_cast<double>(endl - startl) / CLOCKS_PER_SEC * 1000  << " us" << std::endl;
	return 0;
}