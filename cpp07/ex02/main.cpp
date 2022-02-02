#include <iostream>
#include "Array.hpp"

int main()
{
	{
		Array<int>	inttab;
		try
		{
			inttab[0];
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
		Array<int>	tab1(10);
		for(int i = 0; i < 10; i++)
			tab1[i] = i;
		Array<int>	tab2(tab1);

		tab2[5] = 555;
		tab2[7] = 12345;
		for(int i = 0; i < 10; i++)
			std::cout << "TAB1 : " << tab1[i] << " TAB2 : " << tab2[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
