#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "String address        : " << &string << std::endl;
	std::cout << "String address by PTR : " << stringPTR << std::endl;
	std::cout << "String address by REF : " << &stringREF << std::endl;

	std::cout << "String value by PTR : " << *stringPTR << std::endl;
	std::cout << "String value by REF : " << stringREF << std::endl;
}
