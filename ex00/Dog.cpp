#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	mType = "Dog";
	mSound = "Bark!";
	std::cout << "An dog has been created." << std::endl;
}

Dog::Dog(const Dog& source)
	: Animal(source)
{
	mType = "Dog";
	mSound = "Bark!";
	std::cout << "A dog has been created." << std::endl;
}

Dog&	Dog::operator=(const Dog& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		std::cout << "An dog has been copied." << std::endl;
	}

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "An dog has been removed." << std::endl;
}
