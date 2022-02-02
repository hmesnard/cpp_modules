#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
	return ;
}
