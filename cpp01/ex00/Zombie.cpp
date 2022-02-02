#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) const
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " was destroyed" << std::endl;
	return ;
}
