#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: mSound("make nothing (sound)")
{
	std::cout << "An wrong animal has been created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& source)
	: mType(source.mType)
	, mSound("make nothing (sound)")
{
	std::cout << "A wrong animal has been created." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& source)
{
	if (this != &source)
	{
		mType = source.mType;
		mSound = source.mSound;
		std::cout << "An wrong animal has been copied." << std::endl;
	}

	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "An wrong animal has been removed." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (mType);
}

void	WrongAnimal::setType(const std::string& type)
{
	mType = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << mSound << std::endl;
}
