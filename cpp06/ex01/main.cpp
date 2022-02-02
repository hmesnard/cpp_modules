#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

int main()
{
	Data	d;
	d.i = 42;
	d.c = 'c';
	Data*	dptr = &d;
	Data*	newptr;

	newptr = deserialize(serialize(dptr));

	std::cout << "dptr   : " << dptr << std::endl;
	std::cout << "newptr : " << newptr << std::endl;
	std::cout << newptr->i << " --- " << newptr->c << std::endl;
}
