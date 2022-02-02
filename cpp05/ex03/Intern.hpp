#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form *	createSCF(std::string const & target);
		Form *	createRRF(std::string const & target);
		Form *	createPPF(std::string const & target);

	public:
		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern & operator=(Intern const &rhs);

		Form *	makeForm(std::string const & formName, std::string const & target);
};

#endif
