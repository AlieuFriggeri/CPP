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

void PmergeMe::setList(std::string *av, int ac)
{
	for (int i = 0; i < ac - 1; i++)
	{
		_numbers.push_back(strtol(av[i].c_str(), NULL, 10));
	}
	if (_numbers.size() < 3)
	{
		std::cout << "Error: not enough numbers to merge sort" << std::endl;
		exit(1);
	}
}

void PmergeMe::setVector(std::string *av, int ac)
{
	for (int i = 0; i < ac - 1; i++)
	{
		_vnumbers.push_back(strtol(av[i].c_str(), NULL, 10));
	}
}

std::list<long> PmergeMe::mergeSort(std::list<long> &input)
{
	std::list<long> right;
	std::list<long> left;
	int mid = input.size() / 2;
	int i = 0;

	if (input.size() <= 1)
		return input;

	for (std::list<long>::iterator it = input.begin(); it != input.end(); it++)
	{
		if (i < mid)
			left.push_back(*it);
		else
			right.push_back(*it);
		i++;
	}

	left = mergeSort(left);
	right = mergeSort(right);

	return merge(left, right);
}

std::list<long> PmergeMe::merge(std::list<long> & left, std::list<long> & right)
{
	std::list<long> res;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			res.push_back(left.front());
			left.pop_front();
		}
		else
		{
			res.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty())
	{
		res.push_back(left.front());
		left.pop_front();
	}
	while (!right.empty())
	{
		res.push_back(right.front());
		right.pop_front();
	}

	return res;
}

std::vector<long> PmergeMe::mergeSortVector(std::vector<long> &input)
{
	std::vector<long> right;
	std::vector<long> left;
	int mid = input.size() / 2;
	int i = 0;

	if (input.size() <= 1)
		return input;

	for (std::vector<long>::iterator it = input.begin(); it != input.end(); it++)
	{
		if (i < mid)
			left.push_back(*it);
		else
			right.push_back(*it);
		i++;
	}

	left = mergeSortVector(left);
	right = mergeSortVector(right);

	return mergeVector(left, right);
}

std::vector<long> PmergeMe::mergeVector(std::vector<long> & left, std::vector<long> & right)
{
	std::vector<long> res;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			res.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			res.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty())
	{
		res.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		res.push_back(right.front());
		right.erase(right.begin());
	}

	return res;
}