#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
    return *this;
}

void	Dog::makeSound() const
{
	std::cout << "WOOF" << std::endl;
}
