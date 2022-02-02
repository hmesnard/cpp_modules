#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*		res;
	std::string	zname;
	int			i;

	res = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zname = name + (char)(i + '1');
		res[i].setName(zname);
		i++;
	}
	return (res);
}
