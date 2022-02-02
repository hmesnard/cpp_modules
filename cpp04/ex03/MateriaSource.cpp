#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.materia[i])
			this->materia[i] = src.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->materia[i])
			delete this->materia[i];	
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 4; i++)
		{
			if (this->materia[i])
				delete this->materia[i];
			if (rhs.materia[i])
				this->materia[i] = rhs.materia[i]->clone();
			else
				this->materia[i] = NULL;
		}
    return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (materia)
		for (int i = 0; i < 4; i++)
			if (!this->materia[i])
			{
				this->materia[i] = materia;
				break ;
			}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->materia[i] && this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	return (0);
}
