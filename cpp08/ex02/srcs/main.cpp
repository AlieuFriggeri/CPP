#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <stack>
#include <MutantStack.hpp>

int main()
{
	MutantStack<int> stack;
	stack.push(17);
	stack.push(18);
	MutantStack<int>::iterator it = stack.begin();
	std::cout << *it << std::endl;
	++it;
	std::cout << *it << std::endl;
	return 0;
}