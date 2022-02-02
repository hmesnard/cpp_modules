#include <iostream>
#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Bad number of arguments" << std::endl;
	else
		std::cout << Converter(std::string(argv[1]));
}
