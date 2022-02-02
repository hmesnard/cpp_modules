#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:

        Ice();
        Ice(Ice const & src);
        virtual ~Ice();

        Ice & operator=(Ice const & rhs);

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
