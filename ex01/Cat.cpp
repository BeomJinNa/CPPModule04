#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	mType = "Cat";
	brain = new Brain();
	std::cout << "A cat has been created." << std::endl;
}

Cat::Cat(const Cat& source)
	: Animal(source)
{
	mType = "Cat";
	brain = new Brain();
	*brain = *source.brain;
	std::cout << "A cat has been created." << std::endl;
}

Cat&	Cat::operator=(const Cat& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		*brain = *source.brain;
		std::cout << "A cat has been copied." << std::endl;
	}

	return (*this);
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "A cat has been removed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow~" << std::endl;
}

const Brain*	Cat::getBrain(void) const
{
	return (brain);
}
