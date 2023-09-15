#include "BitcoinExchange.hpp"


Bitcoin::Bitcoin(void)
{

}

Bitcoin::Bitcoin(Bitcoin &src) : _btc(src._btc), _input(src._input)
{

}

Bitcoin::~Bitcoin(void)
{

}

Bitcoin &Bitcoin::operator=(Bitcoin &src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void	Bitcoin::setMap(std::string path)
{	
	std::string buff;
	std::ifstream db;
	db.open(path);
	if (!db)
	{
		std::cout << "Error: DataBase: could not open file (bad path)";
		exit(1);
	}

	while (std::getline(db, buff))
	{
		if (buff.compare("date,exchange_rate"))
			_btc[buff.substr(0, buff.find(','))] = strtof(buff.substr(buff.find(',') + 1, buff.length()).c_str(), NULL);
	}
}

void Bitcoin::printBitcoin(void)
{
	for (std::map<std::string, float>::iterator it = _btc.begin(); it != _btc.end(); it++)
	{
		std::cout << "KEY = "<< it->first << " | VALUE = " << it->second<< std::setprecision(8) << std::endl;
	}
}

void Bitcoin::printInput(void)
{
	for (std::map<std::string, float>::iterator it = _input.begin(); it != _input.end(); it++)
	{
		std::cout << "KEY = "<< it->first << " | VALUE = " << it->second<< std::setprecision(8) << std::endl;
	}
}

void Bitcoin::dateCompare(std::map<std::string, float>::iterator it)
{
	struct tm date_btc;
	struct tm date_input;
	std::istringstream s(it->first);

		for (std::map<std::string, float>::iterator it2 = _btc.begin(); it2 != _btc.end(); it2++)
		{
			std::istringstream s2(it2->first);
			s >> std::get_time(&date_input, "%Y-%m-%d");
			s2 >> std::get_time(&date_btc, "%Y-%m-%d");
			std::cout << "BTC:" << date_btc.tm_year + 1900 << " | INPUT:" << date_input.tm_year + 1900 << std::endl;
		}
}

void Bitcoin::setInput(std::string path)
{
	std::ifstream input;
	std::string buff;
	float tmp = -42;

	input.open(path);
	if (!input)
	{
		std::cout << "Error: Input: could not open file (bad path)";
		exit(1);
	}

	while (std::getline(input, buff))
	{
		
		if (buff.compare("date | value"))
		{
			tmp = strtof(buff.substr(buff.find('|') + 1, buff.length()).c_str(), NULL);
			if (buff.find('|') == std::string::npos) // si on en trouve pas le pipe ou que la date est invalide
				_input[buff] = -1;
			else if (tmp > 2147483647.0)
				_input[buff.substr(0, buff.find('|') - 1)] = -2;
			else if (tmp < 0)
				_input[buff.substr(0, buff.find('|') - 1)] = -3;
			else
				_input[buff.substr(0, buff.find('|') - 1)] = tmp;
			tmp = -42;
		}
			//std::cout << strtof(buff.substr(buff.find('|') + 2, buff.length()).c_str(), NULL) << std::endl;
	}
	std::map<std::string, float>::iterator it = _input.begin();
	dateCompare(it);
}

