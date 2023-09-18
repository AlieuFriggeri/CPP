#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
#include <fstream>
#include <time.h>
#include <sstream>
#include <iomanip>

class PmergeMe {

	public:
		PmergeMe(void);
		PmergeMe(PmergeMe &src);
		~PmergeMe(void);
		PmergeMe &operator=(PmergeMe const &src);
		void setList(std::string *av, int ac);
		std::list<long> mergeSort(std::list<long> &input);
		std::list<long> merge(std::list<long> & left, std::list<long> & right);

		std::vector<long> mergeVector(std::vector<long> & left, std::vector<long> & right);
		std::vector<long> mergeSortVector(std::vector<long> &input);
		void setVector(std::string *av, int ac);


		std::list<long> _numbers;
		std::vector<long> _vnumbers;

	private:


};



#endif