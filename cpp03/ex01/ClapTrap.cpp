#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	(void)_energyPoints;
	std::cout << "ClapTrap " << this->_name << " was created" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destructed" << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is attacked and took " << amount << " damage points";
	if (amount > this->_hitpoints)
	{
		this->_hitpoints = 0;
		std::cout << ", no more hitpoints !" << std::endl;
	}
	else
	{
		this->_hitpoints -= amount;
		std::cout << ", " << this->_hitpoints << " hitpoints remaining" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " got repaired (" << amount << "), " << this->_hitpoints << " hitpoints remaining" << std::endl;
	return ;
}
