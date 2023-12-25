#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A brain has been created." << std::endl;
}

Brain::Brain(const Brain& source)
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = source.ideas[i];
	std::cout << "A animal has been created." << std::endl;
}

Brain&	Brain::operator=(const Brain& source)
{
	if (this != &source)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = source.ideas[i];
		std::cout << "A brain has been copied." << std::endl;
	}

	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "A brain has been removed." << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
		return ;
	ideas[index] = idea;
}
