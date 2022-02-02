#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
    return *this;
}

void	Dog::makeSound() const
{	
	std::cout << "WOOF" << std::endl;
}

Brain *	Dog::getBrain() const
{
	return (this->brain);
}
