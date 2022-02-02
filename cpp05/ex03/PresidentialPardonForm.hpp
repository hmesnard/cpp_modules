#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class  PresidentialPardonForm: public Form
{
	private:
		virtual void	action() const;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm(std::string const & target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

};

#endif
