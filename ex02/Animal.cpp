#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "An animal has been created." << std::endl;
}

Animal::Animal(const Animal& source)
	: mType(source.mType)
{
	std::cout << "A animal has been created." << std::endl;
}

Animal&	Animal::operator=(const Animal& source)
{
	if (this != &source)
	{
		mType = source.mType;
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
