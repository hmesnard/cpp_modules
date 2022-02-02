#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;	
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
    return *this;
}

void	Animal::makeSound() const
{
	std::cout << "*Random animal sound*" << std::endl;
}

std::string const &	Animal::getType() const
{
	return (this->type);
}
