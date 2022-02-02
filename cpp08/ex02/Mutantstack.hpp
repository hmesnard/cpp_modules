#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class Mutantstack : public std::stack<T>
{
    public:

        Mutantstack();
        Mutantstack(Mutantstack<T> const & src);
        virtual ~Mutantstack();

        Mutantstack<T> & operator=(Mutantstack<T> const & rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin();
		iterator	end();
};

#include "Mutantstack.cpp"

#endif
