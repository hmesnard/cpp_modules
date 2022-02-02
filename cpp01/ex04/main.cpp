#include <fstream>
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		filename;
	std::string		line;
	std::string		s1;
	std::string		s2;
	size_t			pos;

	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Incorrect parameters" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ifs.open(filename);
	if (ifs.fail())
	{
		std::cout << "Failed to open file" << std::endl;
		return (2);
	}
	ofs.open(filename + ".replace");
	if (ofs.fail())
	{
		std::cout << "Failed to create new file" << std::endl;
		return (3);
	}
	std::getline(ifs, line);
	do
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			pos = line.find(s1, pos);
		}
		ofs << line;
		if (!ifs.eof())
			ofs << std::endl;
		std::getline(ifs, line);
	} while (!ifs.eof());
}
