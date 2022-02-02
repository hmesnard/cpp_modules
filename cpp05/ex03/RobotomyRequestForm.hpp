#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		virtual void	action() const;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm(std::string const & target);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

};

#endif
