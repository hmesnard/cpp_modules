#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain	*brain;

    public:

        Cat();
        Cat(Cat const & src);
        virtual ~Cat();

        Cat & operator=(Cat const & rhs);

		void	makeSound() const;
		Brain *	getBrain() const;
};

#endif
