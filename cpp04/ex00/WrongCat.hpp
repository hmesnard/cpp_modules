#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:

        WrongCat();
        WrongCat(WrongCat const & src);
        virtual ~WrongCat();

        WrongCat & operator=(WrongCat const & rhs);

		virtual void	makeSound() const;
};

#endif
