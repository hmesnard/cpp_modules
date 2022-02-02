#include "Converter.hpp"

Converter::Converter()
{
	possible[0] = false;
	possible[1] = false;
	possible[2] = false;
	possible[3] = false;
}

Converter::Converter(Converter const & src)
{
	*this = src;
}

Converter::Converter(std::string const & str)
{
	possible[0] = false;
	possible[1] = false;
	possible[2] = false;
	possible[3] = false;

	if (this->isChar(str))
		this->fromChar(str);
	else if (this->isInt(str))
		this->fromInt(str);
	else if (this->isFloat(str))
		this->fromFloat(str);
	else if (this->isDouble(str))
		this->fromDouble(str);
}

Converter::~Converter()
{
}

bool	Converter::isChar(std::string const & str)
{
	if (str.size() == 1 && (str[0] < '0' || '9' < str[0]))
		return (true);
	return (false);
}

bool	Converter::isInt(std::string const & str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (!((i == 0 && str[i] == '-') || ('0' <= str[i] && str[i] <= '9')))
			return (false);
	return (true);
}

bool	Converter::isFloat(std::string const & str)
{
	if (str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
		return (true);

	size_t i = 0;

	if (str[i] == '-')
		i++;
	for (; i < str.size() - 1; i++)
	{
		if (str[i] == '.')
			break ;
		if (str[i] < '0' || '9' < str[i])
			return (false);
	}
	if (str[i] == '.')
		i++;
	for (; i < str.size() - 1; i++)
		if (str[i] < '0' || '9' < str[i])
			return (false);
	if (str[i] == 'f')
		return (true);
	return (false);
}

bool	Converter::isDouble(std::string const & str)
{
	if (str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
		return (true);

	size_t i = 0;

	if (str[i] == '-')
		i++;
	for (; i < str.size(); i++)
	{
		if (str[i] == '.')
			break ;
		if (str[i] < '0' || '9' < str[i])
			return (false);
	}
	for (i++; i < str.size(); i++)
		if (str[i] < '0' || '9' < str[i])
			return (false);
	return (true);
}

void	Converter::fromChar(std::string const & str)
{
	this->cval = str[0];
	this->possible[0] = true;

	this->ival = static_cast<int>(this->cval);
	this->possible[1] = true;

	this->fval = static_cast<float>(this->cval);
	this->possible[2] = true;

	this->dval = static_cast<double>(this->cval);
	this->possible[3] = true;
}

void	Converter::fromInt(std::string const & str)
{
	try
	{
		this->ival = std::stoi(str);
	}
	catch (std::exception &e)
	{
		return ;
	}
	this->possible[1] = true;

	if (0 <= ival && ival <= 127)
	{
		this->cval = static_cast<char>(this->ival);
		this->possible[0] = true;
	}

	this->fval = static_cast<float>(this->ival);
	this->possible[2] = true;

	this->dval = static_cast<double>(this->ival);
	this->possible[3] = true;
}

void	Converter::fromFloat(std::string const & str)
{
	try
	{
		this->fval = std::stof(str);
	}
	catch (std::exception &e)
	{
		return ;
	}
	this->possible[2] = true;
	
	if (0 <= fval && fval <= 127)
	{
		this->cval = static_cast<char>(this->fval);
		this->possible[0] = true;
	}

	if (INT_MIN <= fval && fval <= INT_MAX)
	{
		this->ival = static_cast<int>(this->fval);
		this->possible[1] = true;
	}

	this->dval = static_cast<double>(this->fval);
	this->possible[3] = true;
}

void	Converter::fromDouble(std::string const & str)
{
	try
	{
		this->dval = std::stod(str);
	}
	catch (std::exception &e)
	{
		return ;
	}
	this->possible[3] = true;

	if (0 <= dval && dval <= 127)
	{
		this->cval = static_cast<char>(this->dval);
		this->possible[0] = true;
	}
	
	if (INT_MIN <= dval && dval <= INT_MAX)
	{
		this->ival = static_cast<int>(this->dval);
		this->possible[1] = true;
	}
	
	this->fval = static_cast<float>(this->dval);
	this->possible[2] = true;
}

Converter & Converter::operator=(Converter const & rhs)
{
	this->possible[0] = rhs.getPossible(0);
	this->possible[1] = rhs.getPossible(1);
	this->possible[2] = rhs.getPossible(2);
	this->possible[3] = rhs.getPossible(3);
	this->cval = rhs.getCval();
	this->ival = rhs.getIval();
	this->fval = rhs.getFval();
	this->dval = rhs.getDval();

    return *this;
}

bool	Converter::getPossible(int i) const
{
	if (i < 0 || 3 < i)
		return (false);
	return (this->possible[i]);
}

char	Converter::getCval() const
{
	return (this->cval);
}

int		Converter::getIval() const
{
	return (this->ival);
}

float	Converter::getFval() const
{
	return (this->fval);
}

double	Converter::getDval() const
{
	return (this->dval);
}

std::ostream &	operator<<(std::ostream &o, Converter const & converter)
{
	std::stringstream ss;
	std::string	tmp;

	o << "char: ";
	if (converter.getPossible(0))
	{
		if (' ' <= converter.getCval() && converter.getCval() <= '~')
			o << '\'' << converter.getCval() << '\'' << std::endl;
		else
			o << "Non displayable" << std::endl;
	}
	else
		o << "impossible" << std::endl;

	o << "int: ";
	if (converter.getPossible(1))
		o << converter.getIval() << std::endl;
	else
		o << "impossible" << std::endl;
	
	o << "float: ";
	if (converter.getPossible(2))
	{
		ss << converter.getFval();
		tmp = ss.str();
		o << converter.getFval();
		if (tmp.find('.') == std::string::npos && tmp.find("inf") == std::string::npos && tmp.find("nan") == std::string::npos)
			o << ".0";
		o << 'f' << std::endl;
	}
	else
		o << "impossible" << std::endl;

	o << "double: ";
	if (converter.getPossible(3))
	{
		ss << converter.getDval();
		tmp = ss.str();
		o << converter.getDval();
		if (tmp.find('.') == std::string::npos && tmp.find("inf") == std::string::npos && tmp.find("nan") == std::string::npos)
			o << ".0";
		o << std::endl;
	}
	else
		o << "impossible" << std::endl;

	return (o);
}
