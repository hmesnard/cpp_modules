#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{

public:

	HumanA(std::string n, Weapon &w);
	~HumanA(void);

	void	attack(void) const;

private:

	std::string	name;
	Weapon		&weapon;

};

#endif
