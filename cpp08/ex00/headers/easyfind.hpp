#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include <map>

template<typename T>
typename T::iterator easyfind(T &x, int tofind)
{
	typename T::iterator it;

	it = std::find(x.begin(), x.end(), tofind);
	if (it == x.end())
		std::cout << "No occurence of " << tofind << " found" << std::endl;
	return it;
}


#endif