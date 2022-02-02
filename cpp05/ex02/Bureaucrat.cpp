#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name)
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->grade = rhs.grade;
    return *this;
}

std::string const &	Bureaucrat::getName() const
{
	return (this->name);
}

int	const &	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::promotion()
{
	if (this->grade <= 1)
		throw(Bureaucrat::GradeTooHighException());
	this->grade--;
}

void	Bureaucrat::demotion()
{
	if (this->grade >= 150)
		throw(Bureaucrat::GradeTooLowException());
	this->grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high for bureaucrat");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low for bureaucrat");
}

void	Bureaucrat::signForm(Form & form) const
{
	if (form.getSigned())
	{
		std::cout << "Form " << form.getName() << " is already signed." << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes " << form.getName() << std::endl;
	}
	catch (std::string & e)
	{
		std::cout << e << std::endl;
	}
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (o);
}
