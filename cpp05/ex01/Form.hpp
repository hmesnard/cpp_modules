#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

		std::string const	name;
		bool				_signed;
		int const			gradeToSign;
		int const			gradeToExec;

    public:

        Form();
        Form(Form const & src);
		Form(std::string const & name, int const & gradeToSign, int const & gradeToExec);
        virtual ~Form();

        Form & operator=(Form const & rhs);

		std::string	const &	getName() const;
		bool const &		getSigned() const;
		int const &			getGradeToSign() const;
		int const &			getGradeToExec() const;

		Form &	beSigned(Bureaucrat const & bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream &o, Form const & form);

#endif
