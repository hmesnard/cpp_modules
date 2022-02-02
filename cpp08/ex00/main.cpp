#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	std::vector<int>::iterator	it;

	try
	{
		it = easyfind(v, 2);

		std::cout << *(it++) << std::endl << *it << std::endl;

		it = easyfind(v, 36);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
