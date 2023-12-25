#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	mType = "Cat";
	mSound = "Meow~";
	std::cout << "An cat has been created." << std::endl;
}

Cat::Cat(const Cat& source)
	: Animal(source)
{
	mType = "Cat";
	mSound = "Meow~";
	std::cout << "A cat has been created." << std::endl;
}

Cat&	Cat::operator=(const Cat& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		std::cout << "An cat has been copied." << std::endl;
	}

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "An cat has been removed." << std::endl;
}

