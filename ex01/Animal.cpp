#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
	: mSound("make nothing (sound)")
{
	std::cout << "An animal has been created." << std::endl;
}

Animal::Animal(const Animal& source)
	: mType(source.mType)
	, mSound("make nothing (sound)")
{
	std::cout << "A animal has been created." << std::endl;
}

Animal&	Animal::operator=(const Animal& source)
{
	if (this != &source)
	{
		mType = source.mType;
		mSound = source.mSound;
		std::cout << "An animal has been copied." << std::endl;
	}

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "An animal has been removed." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (mType);
}

void	Animal::setType(const std::string& type)
{
	mType = type;
}

void	Animal::makeSound(void) const
{
	std::cout << mSound << std::endl;
}
