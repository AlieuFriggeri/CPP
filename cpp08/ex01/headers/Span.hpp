#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <list>
# include <algorithm>
# include <exception>

class Span
{
	public:
		// Constructors
		Span(unsigned int n);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);

		void addNumber(int n);
		void addNumbers(unsigned int range);
		int shortestSpan(void);
		int longestSpan(void);
		class limitexception : public std::exception{
		public:
			virtual const char *what() const throw() {return "Error: addNumber: span already have max amount of members";}
	};
	private:
		std::list<int> _lst;
		unsigned int _limit;
};

#endif