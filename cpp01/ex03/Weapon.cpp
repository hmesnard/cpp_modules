#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}
