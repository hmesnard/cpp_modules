#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
    return *this;
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU" << std::endl;
}

Brain *	Cat::getBrain() const
{
	return (this->brain);
}
