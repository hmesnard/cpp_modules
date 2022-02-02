#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form *	Intern::createSCF(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form *	Intern::createRRF(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form *	Intern::createPPF(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form *	Intern::makeForm(std::string const & formName, std::string const & target)
{
	std::string	names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form * (Intern::*func[3])(std::string const &) = {&Intern::createSCF, &Intern::createRRF, &Intern::createPPF};
	
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == formName)
		{
			std::cout << "Intern creates " << formName << " targeted on " << target << "." << std::endl;
			return ((this->*func[i])(target));
		}
	}
	std::cout << formName << " form not known." << std::endl;
	return (NULL);
}
