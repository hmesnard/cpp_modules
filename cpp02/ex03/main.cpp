#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	Point	a(Fixed(0), Fixed(0));
	Point	b(Fixed(0), Fixed(9));
	Point	c(Fixed(9), Fixed(0));
	Point	d(Fixed(9), Fixed(9));
	Point	e(Fixed(4), Fixed(0));
	Point	f(Fixed(2), Fixed(2));
	Point	g(Fixed(6), Fixed(1));

	std::cout << "B........D" << std::endl;
	std::cout << "|\\........" << std::endl;
	std::cout << "|.\\......." << std::endl;
	std::cout << "|..\\......" << std::endl;
	std::cout << "|...\\....." << std::endl;
	std::cout << "|....\\...." << std::endl;
	std::cout << "|.....\\..." << std::endl;
	std::cout << "|.F....\\.." << std::endl;
	std::cout << "|.....G.\\." << std::endl;
	std::cout << "A___E____C" << std::endl;

	std::cout << "A(0, 0) is inside ABC triangle : " << (bsp(a, b, c, a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "B(0, 9) is inside ABC triangle : " << (bsp(a, b, c, b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "C(9, 0) is inside ABC triangle : " << (bsp(a, b, c, c) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "D(9, 9) is inside ABC triangle : " << (bsp(a, b, c, d) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "E(4, 0) is inside ABC triangle : " << (bsp(a, b, c, e) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "F(2, 2) is inside ABC triangle : " << (bsp(a, b, c, f) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "G(6, 1) is inside ABC triangle : " << (bsp(a, b, c, g) ? "TRUE" : "FALSE") << std::endl;
}
