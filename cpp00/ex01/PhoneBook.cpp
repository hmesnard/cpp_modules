#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactnumber(0)
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::add()
{
	std::string	input;

	if (this->contactnumber == 8)
	{
		std::cout << std::endl << "Max contact number reached" << std::endl << std::endl;
		return ;
	}
	std::cout << "--- New Contact ---" << std::endl << std::endl << "enter first name : ";
	std::getline(std::cin, input);
	contacts[contactnumber].setfirstname(input);
	std::cout << "enter last name : ";
	std::getline(std::cin, input);
	contacts[contactnumber].setlastname(input);
	std::cout << "enter nickname : ";
	std::getline(std::cin, input);
	contacts[contactnumber].setnickname(input);
	std::cout << "enter phone number : ";
	std::getline(std::cin, input);
	contacts[contactnumber].setphonenumber(input);
	std::cout << "enter darkest secret : ";
	std::getline(std::cin, input);
	contacts[contactnumber].setdarkestsecret(input);
	this->contactnumber++;
	std::cout << std::endl << "Contact Added !" << std::endl << std::endl;
}

void	PhoneBook::printfield(std::string field) const
{
	int written;
	int	spaces;

	spaces = 10 - field.length();
	if (spaces < 0)
		spaces = 0;
	written = 0;
	while (written < spaces)
	{
		std::cout << ' ';
		written++;
	}
	while (written < 9)
	{
		std::cout << field[written - spaces];
		written++;
	}
	if (field.length() <= 10)
		std::cout << field[written - spaces];
	else
		std::cout << '.';
	return ;
}

void	PhoneBook::search() const
{
	int			i;
	std::string	input;

	std::cout << "--- Phonebook ---" << std::endl << std::endl << "index     |first name|last name |nick name |phone num |secret" << std::endl;
	i = 0;
	while (i < this->contactnumber)
	{
		std::cout << "         " << i + 1 << "|";
		printfield(this->contacts[i].getfirstname());
		std::cout << "|";
		printfield(this->contacts[i].getlastname());
		std::cout << "|";
		printfield(this->contacts[i].getnickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl << "Insert contact index : ";
	std::getline(std::cin, input);
	if (input.length() > 1 || !('0' < input[0] && input[0] <= (this->contactnumber + '0')))
		std::cout << std::endl << "Incorrect contact index" << std::endl << std::endl;
	else
	{
		std::cout << std::endl << "Contact " << input[0] << ":" << std::endl;
		std::cout << "First name     : " << this->contacts[input[0] - '1'].getfirstname() << std::endl;
		std::cout << "Last name      : " << this->contacts[input[0] - '1'].getlastname() << std::endl;
		std::cout << "Nick name      : " << this->contacts[input[0] - '1'].getnickname() << std::endl;
		std::cout << "Phone number   : " << this->contacts[input[0] - '1'].getphonenumber() << std::endl;
		std::cout << "Darkest secret : " << this->contacts[input[0] - '1'].getdarkestsecret() << std::endl;
	}
}
