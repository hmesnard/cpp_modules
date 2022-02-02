#include "Mutantstack.hpp"

template<typename T>
Mutantstack<T>::Mutantstack() : std::stack<T>()
{
}

template<typename T>
Mutantstack<T>::Mutantstack(Mutantstack<T> const & src) : std::stack<T>(src)
{
}

template<typename T>
Mutantstack<T>::~Mutantstack()
{	
}

template<typename T>
Mutantstack<T> & Mutantstack<T>::operator=(Mutantstack<T> const & rhs)
{
	this->c = rhs.c;
    return *this;
}

template<typename T>
typename Mutantstack<T>::iterator	Mutantstack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename Mutantstack<T>::iterator	Mutantstack<T>::end()
{
	return (this->c.end());
}
