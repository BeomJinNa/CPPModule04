#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	//const Animal*	animal = new Animal();
	const Dog*		dog = new Dog();
	const Cat*		cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete cat;
	delete dog;
	//delete animal;

	return (0);
}
