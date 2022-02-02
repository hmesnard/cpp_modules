#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{	
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
    return *this;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void		Brain::setIdea(int i, std::string str)
{
	this->ideas[i] = str;
}
