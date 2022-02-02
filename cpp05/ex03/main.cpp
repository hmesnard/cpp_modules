#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat Bob("Bob", 1);
		Intern	someRandomIntern;
		Form *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bob.signForm(*rrf);
		Bob.executeForm(*rrf);
		delete rrf;

		std::cout << std::endl;

		rrf = someRandomIntern.makeForm("haha", "Bender");
		delete rrf;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
