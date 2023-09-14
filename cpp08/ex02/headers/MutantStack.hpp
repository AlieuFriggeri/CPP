#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <list>
# include <algorithm>
# include <exception>
# include <stack>
# include <deque>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack<T>() {};
		MutantStack<T>(MutantStack<T> &src)
		{
			*this = src;
		};
		~MutantStack<T>() {};
		MutantStack<T>& operator=(MutantStack<T> &src)
		{
			if (this != &src)
				*this = src;
			return *this;
		};
		typedef typename Container::iterator iterator;

		iterator begin(void)
		{return this->c.begin();}

		iterator end(void)
		{return this->c.end();}
	private:

};

#endif