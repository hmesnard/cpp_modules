#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	Bob50("Bob50", 50);
		Bureaucrat	Bob1("Bob1", 1);

		ShrubberyCreationForm	SCF("target1");
		RobotomyRequestForm		RRF("target2");
		PresidentialPardonForm	PPF("target3");

		Bob50.signForm(SCF);
		Bob50.signForm(RRF);
		Bob50.signForm(PPF);
		std::cout << std::endl;

		Bob50.executeForm(SCF);
		Bob50.executeForm(RRF);
		Bob50.executeForm(PPF);
		std::cout << std::endl;

		Bob1.signForm(SCF);
		Bob1.signForm(RRF);
		Bob1.signForm(PPF);
		std::cout << std::endl;

		Bob1.executeForm(SCF);
		Bob1.executeForm(RRF);
		Bob1.executeForm(PPF);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
