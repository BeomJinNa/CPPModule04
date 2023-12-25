#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const std::string& type)
	: mType(type)
{
}

AMateria::AMateria(const AMateria& source)
	: mType(source.mType)
{
}

AMateria&	AMateria::operator=(const AMateria& source)
{
	if (this != &source)
	{
		mType = source.mType;
	}

	return (*this);
}

AMateria::~AMateria(void)
{
}

const std::string&	AMateria::getType(void) const
{
	return (mType);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
