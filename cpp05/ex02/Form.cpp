#include "Form.hpp"

Form::Form() : name(""), _signed(false), gradeToSign(150), gradeToExec(150), target("")
{
}

Form::Form(Form const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec), target(src.target)
{
	*this = src;
}

Form::Form(std::string const & name, int const & gradeToSign, int const & gradeToExec, std::string const &target) : name(name), _signed(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec), target(target)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw(Form::GradeTooHighException());
	if (gradeToSign > 150 || gradeToExec > 150)
		throw(Form::GradeTooLowException());
}

Form::~Form()
{
}

Form & Form::operator=(Form const & rhs)
{
	this->_signed = rhs._signed;
    return *this;
}

std::string const &	Form::getName() const
{
	return (this->name);
}

bool const &	Form::getSigned() const
{
	return (this->_signed);
}

int const &	Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int const &	Form::getGradeToExec() const
{
	return (this->gradeToExec);
}

std::string const &	Form::getTarget() const
{
	return (this->target);
}

Form &	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw(Form::GradeTooLowException());
	this->_signed = true;
	return (*this);
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!this->_signed)
		throw (std::string("form " + this->name + " is not signed"));
	if (executor.getGrade() > this->gradeToExec)
		throw (std::string(executor.getName() + " grade is too low to execute " + this->name));
	this->action();
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high for form");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low for form");
}

std::ostream &	operator<<(std::ostream &o, Form const &form)
{
	o << form.getName() << ", " << (form.getSigned() ? "Signed" : "Unsigned") << " form, grade to sign : " << form.getGradeToSign() << ", grade to Exec : " << form.getGradeToExec();
	return (o);
}
