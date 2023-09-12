#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
#include <cstring>
class ScalarConverter
{
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);
		void convert(std::string input);
		void identify(std::string input);
		bool isLiteral(std::string input);
		bool isChar(std::string input);
		bool isInt(std::string input);
		bool isfd(std::string input);
		bool ftoi(std::string input);
		void printVal(void);

	private:
		std::string _str;
		int _n;
		float _f;
		double _d;
		char _c;
		bool _possible;
		bool _intOverflow;
		bool _floatOverflow;
};

#endif