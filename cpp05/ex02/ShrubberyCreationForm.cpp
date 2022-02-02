#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm_" + target, 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream	ofs;
	
	ofs.open(this->getTarget() + "_shrubbery");

	ofs << "              ,@@@@@@@," << std::endl;
 	ofs << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
 	ofs << "   ,&\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
 	ofs << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
 	ofs << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
 	ofs << "  %&&%/ %&\%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
 	ofs << "  `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
 	ofs << "      |o|        | |         | |" << std::endl;
 	ofs << "      |.|        | |         | |" << std::endl;

	ofs.close();
}
