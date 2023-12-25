#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
{
	mType = "cure";
}

Cure::Cure(const Cure& source)
	: AMateria(source)
{
	mType = "cure";
}

Cure&	Cure::operator=(const Cure& source)
{
	if (this != &source)
	{
	}

	return (*this);
}

Cure::~Cure(void)
{
}

Cure*	Cure::clone(void) const
{
	Cure*	output = new Cure(*this);

	return (output);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
			  << "'s wounds *" << std::endl;
}
