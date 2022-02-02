#include "span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	{
		span sp = span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try
		{
			sp.addNumber(10);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::vector<int>	v(10, 5);
			sp.addNumber(v.begin(), v.end());
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	srand(time(NULL));
	{
		int n = 250;
		span s = span(n);
		std::vector<int> v;
	
		for(int i = 0; i < n; i++)
			v.push_back(rand() % 100000);
	
		try
		{
			std::cout << s.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	
		try
		{
			s.addNumber(v.begin(), v.end());
			std::cout << s.shortestSpan() << std::endl;
			std::cout << s.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		int n = 30000;
		span s = span(n);
		std::vector<int> v;

		for (int i = 0; i < n; i++)
			v.push_back(rand() % 2147483647);

		try
		{
			s.addNumber(v.begin(), v.end());
			std::cout << s.shortestSpan() << std::endl;
			std::cout << s.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
