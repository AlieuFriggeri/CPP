#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <fstream>
#include <time.h>
#include <sstream>
#include <iomanip>

class Bitcoin {

	public:
		Bitcoin(void);
		Bitcoin(Bitcoin &src);
		~Bitcoin(void);
		Bitcoin &operator=(Bitcoin &src);

		void setMap(std::string path);
		void printBitcoin(void);
		void dateCompare(std::string str);
		void setInput(std::string path);
		void printInput(void);

	private:
		std::map<std::string, float> _btc;
		std::map<std::string, float> _input;
};



#endif