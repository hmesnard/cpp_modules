#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ('a' <= argv[i][j] && argv[i][j] <= 'z')
				argv[i][j] -= 32;
			j++;
		}
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}
