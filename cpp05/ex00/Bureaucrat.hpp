#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:

		std::string const	name;
		int					grade;

    public:

        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string const & name, int grade);
        virtual ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string	const &	getName() const;
		int const &			getGrade() const;

		void				promotion();
		void				demotion();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const & bureaucrat);

#endif
