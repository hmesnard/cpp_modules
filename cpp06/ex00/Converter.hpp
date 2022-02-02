#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits.h>

class Converter
{
    private:

		bool	possible[4];
        char	cval;
		int		ival;
		float	fval;
		double	dval;

		bool	isChar(std::string const & str);
		bool	isInt(std::string const & str);
		bool	isFloat(std::string const & str);
		bool	isDouble(std::string const & str);

		void	fromChar(std::string const & str);
		void	fromInt(std::string const & str);
		void	fromFloat(std::string const & str);
		void	fromDouble(std::string const & str);

    public:

        Converter();
        Converter(Converter const & src);
		Converter(std::string const & str);
        virtual ~Converter();

        Converter & operator=(Converter const & rhs);

		bool	getPossible(int i) const;
		char	getCval() const;
		int		getIval() const;
		float	getFval() const;
		double	getDval() const;
};

std::ostream &	operator<<(std::ostream &o, Converter const & converter);

#endif
