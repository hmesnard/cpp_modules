#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	return ;
}

Ice::Ice(Ice const & src)
{
	*this = src;
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	this->type = rhs.type;
    return *this;
}

Ice*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
