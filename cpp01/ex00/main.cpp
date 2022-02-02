#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z;

	z = newZombie("Bob");
	z->announce();
	delete z;

	randomChump("Mike");

	return (0);
}
