#include "main.hpp"
#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
		return(std::cout << "bad arg" << std::endl, 1);
	int						length;
	int						i;
	std::string				result;
	std::string				arg(av[2]);
	std::string				replace(av[3]);
	std::string::size_type	pos;
	
	pos = 0;
	length = arg.length();
	std::ifstream file (av[1]);
	if (!file)
		return ((std::cout << "Error\n"), 1);
	std::string line;
	if (arg.empty())
		return ((std::cout << "Error\n"), 1);
	while (std::getline(file, line))
	{
		i = 0;
		pos = line.find(arg);
		while (pos != std::string::npos)
		{
			result += line.substr(i, pos - i);
			result += replace;
			i = pos + length;
			pos = line.find(arg, i);
		}
		result += line.substr(i);
		if (!file.eof())
			result += '\n';
	}
	std::string outfile(av[1]);
	outfile += ".replace";
	std::ofstream out(outfile.c_str());
	if (!out)
		return ((std::cout << "Error\n"), 1);
	out << result;
	std::cout << result;
	return (0);
}
