#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Form	Form("Form", -50, 100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	Bob("Bob", 10);
		Form		Form1("Form1", 50, 100);
		Form		Form2("Form2", 5, 100);
	
		std::cout << Bob << std::endl << Form1 << std::endl << Form2 << std::endl;
	
		Bob.signForm(Form1);
		Bob.signForm(Form2);
	
		Bob.signForm(Form1);
	
		std::cout << Bob << std::endl << Form1 << std::endl << Form2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
