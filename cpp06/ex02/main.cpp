#include "Base.hpp"

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

int main()
{
	Base * b;

	b = generate();

	std::cout << "identify by pointer :" << std::endl;

	identify(b);

	std::cout << "identify by reference :" << std::endl;

	identify(*b);
}
