#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void)
	: mNumberOfMateria(0)
{
	for (int i = 0; i < 4; ++i)
		mMateria[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& source)
	: mNumberOfMateria(source.mNumberOfMateria)
{
	for (int i = 0; i < mNumberOfMateria; ++i)
		mMateria[i] = source.mMateria[i]->clone();
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &source)
{
	if (this != &source)
	{
		mNumberOfMateria = source.mNumberOfMateria;
		for (int i = 0; i < mNumberOfMateria; ++i)
		{
			if (mMateria[i] != nullptr)
				delete mMateria[i];
			mMateria[i] = source.mMateria[i]->clone();
		}
	}

	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < mNumberOfMateria; ++i)
		delete mMateria[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (mNumberOfMateria >= 4)
		return ;
	mMateria[mNumberOfMateria] = m->clone();
	++mNumberOfMateria;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < mNumberOfMateria; ++i)
	{
		if (type == mMateria[i]->getType())
			return (mMateria[i]->clone());
	}
	return (0);
}
