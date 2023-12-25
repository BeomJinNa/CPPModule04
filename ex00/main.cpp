#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*		meta = new Animal();
	const WrongAnimal*	Wmeta = new WrongAnimal();
	const Animal*		i = new Cat();
	const Animal*		j = new Dog();
	const WrongAnimal*	k = new WrongCat();

	std::cout << i->getType() << " (i)" << std::endl;
	std::cout << j->getType() << " (j)" << std::endl;
	std::cout << k->getType() << " (k)" << std::endl;
	meta->makeSound();
	Wmeta->makeSound();
	i->makeSound();
	j->makeSound();
	k->makeSound();

	delete meta;
	delete Wmeta;
	delete i;
	delete j;
	delete k;

	return (0);
}
