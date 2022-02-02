#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat Bob1("Bob1", 3);
		std::cout << Bob1 << std::endl;

		Bob1.promotion();
		std::cout << Bob1 << std::endl;

		Bob1.promotion();
		std::cout << Bob1 << std::endl;

		Bob1.promotion();
		std::cout << Bob1 << std::endl;

	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Bob2("Bob2", 149);
		std::cout << Bob2 << std::endl;

		Bob2.demotion();
		std::cout << Bob2 << std::endl;

		Bob2.demotion();
		std::cout << Bob2 << std::endl;

	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Bob3("Bob3", 1000);
	}
	catch (std::exception& e)
	{	
		std::cout << e.what() << std::endl;
	}
}
