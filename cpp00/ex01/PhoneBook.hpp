#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{

public:

	Contact	contacts[8];

	PhoneBook();
	~PhoneBook();

	void	add();
	void	search() const;

private:

	int		contactnumber;
	void	printfield(std::string field) const;
};

#endif
