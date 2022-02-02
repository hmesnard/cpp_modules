#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
	this->_energyPoints = 50;
	std::cout << "DiamondTrap " << this->_name << " was created" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " was destructed" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->ClapTrap::_name << ", but you can call me " << this->_name << " !" << std::endl;
	return ;
}
