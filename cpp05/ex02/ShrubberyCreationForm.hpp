#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		virtual void	action() const;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(std::string const & target);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

};

#endif
