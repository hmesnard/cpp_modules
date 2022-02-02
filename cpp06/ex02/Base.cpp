#include "Base.hpp"

Base::~Base()
{
}

#include <ctime>
#include <cstdlib>
#include <iostream>

Base * generate(void)
{
	Base * ret;
	srand(time(NULL));
	int abc = rand() % 3;

	switch (abc)
	{
		case (0):
			ret = new A();
			break;
		case (1):
			ret = new B();
			break;
		case (2):
			ret = new C();
			break;
		default:
			ret = NULL;
			break;
	}

	return (ret);
}

void	identify(Base* p)
{
	Base *	test;
	
	test = dynamic_cast<A*>(p);
	if (test)
	{
		std::cout << "A" << std::endl;
		return ;
	}

	test = dynamic_cast<B*>(p);
	if (test)
	{
		std::cout << "B" << std::endl;
		return ;
	}

	test = dynamic_cast<C*>(p);
	if (test)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::exception &e) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::exception &e) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (std::exception &e) {}
}
