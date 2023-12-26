#include <iostream>
#include "Character.hpp"

List*	Character::start = nullptr;
List*	Character::last = nullptr;

Character::Character(void)
	: mNumberOfItems(0)
{
	for (int i = 0; i < 4; ++i)
		mInventory[i] = nullptr;
}

Character::Character(const std::string& name)
	: mName(name)
	, mNumberOfItems(0)
{
	for (int i = 0; i < 4; ++i)
		mInventory[i] = nullptr;
}

Character::Character(const Character& source)
	: mName(source.mName)
	, mNumberOfItems(source.mNumberOfItems)
{
	for (int i = 0; i < 4; ++i)
		mInventory[i] = source.mInventory[i]->clone();
}

Character&	Character::operator=(const Character& source)
{
	if (this != &source)
	{
		mName = source.mName;
		mNumberOfItems = source.mNumberOfItems;
		for (int i = 0; i < 4; ++i)
		{
			if (mInventory[i] != nullptr)
				delete mInventory[i];
			mInventory[i] = source.mInventory[i]->clone();
		}
	}

	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < mNumberOfItems; ++i)
		delete mInventory[i];
}

const std::string&	Character::getName(void) const
{
	return (mName);
}

void	Character::equip(AMateria* m)
{
	if (mNumberOfItems >= 4 || m == nullptr)
	{
		std::cout << "can not equip (inventory is full OR the Materia is null)" << std::endl;
		return ;
	}
	mInventory[mNumberOfItems] = m;
	std::cout << mInventory[mNumberOfItems]->getType() << " equiped" << std::endl;
	++mNumberOfItems;
}

void	Character::unequip(int idx)
{
	List*	ground;

	if (idx < 0 || idx >= mNumberOfItems)
		return ;

	--mNumberOfItems;
	ground = new List;
	ground->next = nullptr;
	ground->materia = mInventory[mNumberOfItems];
	if (last != nullptr)
		last->next = ground;
	last = ground;
	if (start == nullptr)
		start = last;

	mInventory[mNumberOfItems] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= mNumberOfItems)
		return ;
	mInventory[idx]->use(target);
}

void	Character::clearUnequiped(void)
{
	List*	ptr;
	List*	next;

	ptr = start;
	while (ptr != nullptr)
	{
		next = ptr->next;
		delete ptr->materia;
		delete ptr;
		ptr = next;
	}
}
