#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Clappy("Clappy");

	Clappy.attack("randomTarget");
	Clappy.takeDamage(5);
	Clappy.takeDamage(18);
	Clappy.beRepaired(7);
	Clappy.beRepaired(4);

	return (0);
}
