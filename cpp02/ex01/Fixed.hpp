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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_value;
	static const int	_fracBits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
