#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(int argc, char **argv)
{
	int		N;
	Zombie	*horde;
	int		i;

	if (argc != 3 || argv[2][0] < '0' || argv[2][0] > '9' || argv[2][1])
		return (1);
	N = argv[2][0] - '0';
	horde = zombieHorde(N, argv[1]);
	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
