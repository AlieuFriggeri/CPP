#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include <map>

template<typename T>
int easyfind(T x, int tofind)
{
	return *(std::find(x.begin(), x.end(), tofind));
}


#endif