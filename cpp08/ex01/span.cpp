#include "span.hpp"

span::span() : _size(0) 
{
}

span::span(unsigned int n) : _size(n)
{
}

span::span(span const & src) : _v(src._v), _size(src._size)
{
}

span::~span()
{
}

span & span::operator=(span const & rhs)
{
	this->_v = rhs._v;
	this->_size = rhs._size;
    return *this;
}

void	span::addNumber(int n)
{
	if (this->_v.size() >= this->_size)
		throw (span::FullObject());
	this->_v.push_back(n);
	std::sort(this->_v.begin(), this->_v.end());
}

void	span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_v.size() + (static_cast<int>(end - begin)) > this->_size)
		throw (span::FullObject());
	this->_v.insert(this->_v.end(), begin, end);
	std::sort(this->_v.begin(), this->_v.end());
}

int		span::shortestSpan() const
{
	if (this->_v.size() < 2)
		throw (span::NoSpan());
	int ret = std::abs(this->_v[0] - this->_v[1]);
	int	tmp;
	for (std::vector<int>::const_iterator it = this->_v.begin(); it != this->_v.end(); ++it)
	{
		tmp = std::abs(*(it - 1) - *it);
		if (tmp < ret)
			ret = tmp;
	}
	return (ret);
}

int		span::longestSpan() const
{
	if (this->_v.size() < 2)
		throw (span::NoSpan());
	return (*std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end()));
}
