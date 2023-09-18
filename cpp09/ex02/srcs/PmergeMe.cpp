#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{

}

PmergeMe::PmergeMe(PmergeMe &src)
{
	(void)src;
}

PmergeMe::~PmergeMe(void)
{

}

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
{
	if (this != &src)
		*this = src;
	return *this;
}