#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;	
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->type = rhs.type;
    return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Random animal sound*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
