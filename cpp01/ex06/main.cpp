#include "Karen.hpp"

void	karenComment(Karen &k, std::string level)
{
	std::cout << "[ " << level << " ]" << std::endl;
	k.complain(level);
	std::cout << std::endl;
	return ;
}

int	main(int argc, char **argv)
{
	Karen		k;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 		i = 0;

	if (argc == 1)
		i = -1;
	else
		while (i < 4)
		{
			if (argv[1] == levels[i])
				break ;
			i++;
		}
	switch (i)
	{
		case (0):
			karenComment(k, "DEBUG");
			karenComment(k, "INFO");
			karenComment(k, "WARNING");
			karenComment(k, "ERROR");
			break ;
		case (1):
			karenComment(k, "INFO");
			karenComment(k, "WARNING");
			karenComment(k, "ERROR");
			break ;
		case (2):
			karenComment(k, "WARNING");
			karenComment(k, "ERROR");
			break ;
		case (3):
			karenComment(k, "ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
