#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	mType = "WrongCat";
	std::cout << "A wrong cat has been created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& source)
	: WrongAnimal(source)
{
	mType = "WrongCat";
	std::cout << "A wrong cat has been created." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& source)
{
	if (this != &source)
	{
		WrongAnimal::operator=(source);
		std::cout << "A wrong cat has been copied." << std::endl;
	}

	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "A wrong cat has been removed." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow~" << std::endl;
}
