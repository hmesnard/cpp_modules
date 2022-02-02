#include <iostream>
#include "iter.hpp"

int main()
{
	int			iarr[5] = {0, 1, 2, 3, 4};
	double		darr[2] = {0.001, 5.4321};
	std::string	sarr[3] = {"lol", "haha", "mdr"};

	iter(iarr, 5, print);
	iter(darr, 2, print);
	iter(sarr, 3, print);
}
