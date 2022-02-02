#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:

	   AMateria	*materia[4];

    public:

        MateriaSource();
        MateriaSource(MateriaSource const & src);
        virtual ~MateriaSource();

        MateriaSource & operator=(MateriaSource const & rhs);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
