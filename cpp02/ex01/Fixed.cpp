#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int intValue)
{	
	std::cout << "Int constructor called" << std::endl;
	this->_value = intValue << Fixed::_fracBits;
	return ;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(floatValue * (1 << Fixed::_fracBits));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << Fixed::_fracBits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_fracBits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	std::cout << rhs.toFloat();
	return o;
}

const int	Fixed::_fracBits = 8;
