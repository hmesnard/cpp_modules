#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}
