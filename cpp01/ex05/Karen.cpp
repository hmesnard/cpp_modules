#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	void		(Karen::*fp[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*fp[i])();
			return ;
		}
		i++;
	}
	std::cout << "Incorrect level" << std::endl;
	return ;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl <<"I just love it!" << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl << "You don’t put enough!" << std::endl << "If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}
