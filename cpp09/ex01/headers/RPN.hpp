#ifndef RPN_HPP
#define RPN_HPP

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

class RPN {

	public:
		RPN(void);
		RPN(RPN &src);
		~RPN(void);
		RPN &operator=(RPN const &src);
		void setStack(std::string arg);
		char isToken(char c);
		void process(char c);
		int operation(int nb, int y, char c);

	private:
		std::stack<int> _numbers;
		std::string _operator;
};



#endif