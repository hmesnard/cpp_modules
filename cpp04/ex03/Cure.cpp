#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	return ;
}

Cure::Cure(Cure const & src)
{
	*this = src;
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	this->type = rhs.type;
    return *this;
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
