#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:

	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(const int intValue);
	Fixed(const float floatValue);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);

	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed	&min(Fixed &x1, Fixed &x2);
	static Fixed	&max(Fixed &x1, Fixed &x2);
	static Fixed const	&min(Fixed const &x1, Fixed const &x2);
	static Fixed const	&max(Fixed const &x1, Fixed const &x2);

private:

	int					_value;
	static const int	_fracBits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
