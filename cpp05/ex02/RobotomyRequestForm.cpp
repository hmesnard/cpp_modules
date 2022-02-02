#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "")
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm_" + target, 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL));
	std::cout << "BRRRRZZZ VrrrrrRRRRR bzZZZZzzzzzz ...... " << std::endl;
	std::cout << this->getTarget() << (rand() % 2 ? " has been robotomized successfully.": " could not be robotomized unfortunately.") << std::endl;
}
