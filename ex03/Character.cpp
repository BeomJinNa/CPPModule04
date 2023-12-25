#include "Character.hpp"

t_list*	Character::start = nullptr;
t_list*	Character::last = nullptr;

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
		return ;
	mInventory[mNumberOfItems] = m;
	++mNumberOfItems;
}

void	Character::unequip(int idx)
{
	t_list*	ground;

	if (idx < 0 || idx >= mNumberOfItems)
		return ;

	--mNumberOfItems;
	ground = new t_list;
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
	t_list*	ptr;
	t_list*	next;

	ptr = start;
	while (ptr != nullptr)
	{
		next = ptr->next;
		delete ptr->materia;
		delete ptr;
		ptr = next;
	}
}
