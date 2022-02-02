#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " was destructed" << std::endl;
	return ;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " : Hey guys ! High fives ? :P" << std::endl;
	return ;
}
