#include <iostream>
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
	mType = "ice";
}

Ice::Ice(const Ice& source)
	: AMateria(source)
{
	mType = "ice";
}

Ice&	Ice::operator=(const Ice& source)
{
	if (this != &source)
	{
	}

	return (*this);
}

Ice::~Ice(void)
{
}

Ice*	Ice::clone(void) const
{
	Ice*	output = new Ice(*this);

	return (output);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << " *" << std::endl;
}
