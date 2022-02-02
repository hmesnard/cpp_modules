#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	{
		ClapTrap	Clappy("Clappy");

		Clappy.attack("randomTarget");
		Clappy.takeDamage(5);
		Clappy.takeDamage(18);
		Clappy.beRepaired(7);
		Clappy.beRepaired(4);
	}

	std::cout << std::endl;

	{
		ScavTrap	Scavy("Scavy");

		Scavy.attack("randomTarget");
		Scavy.takeDamage(5);
		Scavy.takeDamage(18);
		Scavy.beRepaired(7);
		Scavy.beRepaired(4);
		Scavy.guardGate();
	}

	std::cout << std::endl;

	{
		FragTrap	Fraggy("Fraggy");

		Fraggy.attack("randomTarget");
		Fraggy.takeDamage(5);
		Fraggy.takeDamage(18);
		Fraggy.beRepaired(7);
		Fraggy.beRepaired(4);
		Fraggy.highFivesGuys();
	}

	return (0);
}
