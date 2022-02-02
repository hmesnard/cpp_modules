#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Dog *doggy = new Dog();

		doggy->getBrain()->setIdea(0, "lol");
	
		Dog *doggo = new Dog(*doggy);

		delete doggy;
	
		std::cout << doggo->getBrain()->getIdea(0) << std::endl;

		delete doggo;
	}
	std::cout << std::endl;
	{
		Animal	*tab[4];
		for(int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}

		std::cout << std::endl;

		for(int i = 0; i < 4; i++)
			delete tab[i];
	}
}
