#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	const Animal*	animals[10];
	const Dog*		dog = new Dog();
	const Cat*		cat = new Cat();

	for (int i = 0; i < 5; ++i)
		animals[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		animals[i] = new Cat();

	std::cout << "animals have been created." << std::endl;

	for (int i = 0; i < 3; ++i)
		std::cout << "dog, cat idea[" << i << "] : "
				  << dog->getBrain()->getIdea(i) << ", "
				  << cat->getBrain()->getIdea(i) << std::endl;

	for (int i = 0; i < 10; ++i)
		delete animals[i];

	delete cat;
	delete dog;

	return (0);
}
