#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class span
{
    private:

		std::vector<int>	_v;
		unsigned int		_size;

    public:

        span();
		span(unsigned int n);
        span(span const & src);
        virtual ~span();

        span & operator=(span const & rhs);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class FullObject : public std::exception {
				virtual const char* what() const throw() {
					return ("not enough space to add number");
				};
		};

		int		shortestSpan() const;
		int		longestSpan() const;

		class NoSpan : public std::exception {
				virtual const char* what() const throw() {
					return ("there are less than 2 numbers in objects");
				};
		};
};

#endif
