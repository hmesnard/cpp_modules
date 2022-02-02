#include "Character.hpp"

Character::Character()
{
	for(int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return ;
}

Character::Character(std::string const & name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return ;
}

Character::Character(Character const & src)
{
	this->name = src.name;
	for(int i = 0; i < 4; i++)
	{
		if (src.materia[i])
			this->materia[i] = src.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
	return ;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (this->materia[i])
			delete this->materia[i];
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		for(int i = 0; i < 4; i++)
		{
			if (this->materia[i])
				delete this->materia[i];
			if (rhs.materia[i])
				this->materia[i] = rhs.materia[i]->clone();
			else
				this->materia[i] = NULL;
		}
	}
    return *this;
}

std::string	const &	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
		if (!this->materia[i])
		{
			materia[i] = m;
			break ;
		}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3)
		this->materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx <= 3 && this->materia[idx])
		this->materia[idx]->use(target);
}
