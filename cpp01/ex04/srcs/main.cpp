#include "../headers/main.hpp"

int	strReplace(std::string line, char **av){
	
	int start;
	std::ofstream outfile;
	outfile.open((std::string (av[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)line.size(); i++)
	{
		start = line.find(av[2], i);
		if (start != -1 && start == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << line[i];
	}
	outfile.close();
	return (0);
	// start = 0;
	// end = line.find(s1);
	// std::cout <<line << " " <<  end << std::endl;
	// while (end != std::string::npos && end < line.size())
	// {
	// 	res.append(line, start, end);
	// 	res.append(s2);
	// 	start = end + 1;
	// 	end = line.find(s1, start);
	// 	// std::cout << end << " "<< res << std::endl;
	// 	// return (NULL);
	// }
	//res.append(s2, start);
	//return (res);
}

int main(int ac, char **av){
	if (ac != 4)
	{
		std::cout << "Invalid arguments, please enter filename, string to find and what you want to replace it with" << std::endl;
		return (0);
	}
	char c;
	std::ifstream infile;
	std::string str;

	infile.open(av[1]);
	if (infile.fail())
		{
			std::cout << av[1] << ": No such file or directory" << std::endl;
			return (1);
		}
	while (!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	return (strReplace(str, av));
	// std::string filename = av[1];
	// std::string s1 = av[2];
	// std::string s2 = av[3];
	// std::ifstream infile;
	// std::ofstream outfile;
	// if (s1.empty() || s2.empty() || filename.empty())
	// {
	// 	std::cerr << "Error: Empty arguments" << std::endl;
	// 	return (1);
	// }
	// infile.open(filename, std::fstream::out);
	// if (infile.is_open())
	// {
	// 	outfile.open(filename.append(".replace"), std::fstream::in | std::fstream::trunc);
	// 	if (outfile.is_open())
	// 	{
	// 		//while (getline(infile, filename))
	// 		strReplace(filename, s1, s2, av[1]);
	// 		//outfile.close();
	// 	}
	// 	else 
	// 	{
	// 		std::cerr << av[1] << ".replace does not exist" << std::endl;
	// 		return (2);
	// 	}
	// 	infile.close();
	// }
	// else
	// {
	// 	std::cerr << av[1] << "does not exist" << std::endl;
	// }
	return (0);
}