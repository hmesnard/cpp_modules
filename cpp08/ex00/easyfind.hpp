#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class CantFindOccurrence : public std::exception
{
	public:
		virtual const char* what() const throw() {
			return ("occurrence not found");
		}
};

template<typename T>
typename T::iterator	easyfind(T & container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		return it;
	throw (CantFindOccurrence());
}

#endif
