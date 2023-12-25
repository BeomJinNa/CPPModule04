#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	mType = "Dog";
	mSound = "Bark!";
	brain = new Brain();
	std::cout << "An dog has been created." << std::endl;
}

Dog::Dog(const Dog& source)
	: Animal(source)
{
	mType = "Dog";
	mSound = "Bark!";
	brain = new Brain();
	*brain = *source.brain;
	std::cout << "A dog has been created." << std::endl;
}

Dog&	Dog::operator=(const Dog& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		*brain = *source.brain;
		std::cout << "An dog has been copied." << std::endl;
	}

	return (*this);
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "An dog has been removed." << std::endl;
}
