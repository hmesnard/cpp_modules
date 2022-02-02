#include "AMateria.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->type = rhs.type;
    return *this;
}

std::string const &	AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter & target)
{
	(void)target;
}
