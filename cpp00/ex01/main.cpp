#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int		main()
{
	std::string	input;
	PhoneBook	instance;

	while (1)
	{
		std::cout << '>';
		std::getline(std::cin, input);
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			instance.add();
		else if (input == "SEARCH")
			instance.search();
	}
}
