#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource*	src = new MateriaSource();
	AMateria		*ice = new Ice();
	AMateria		*cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter*		me = new Character("me");
	AMateria*		tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("death");
	me->equip(tmp);

	ICharacter*		bob = new Character("bob");

	std::cout << "\nuse skill slot 0" << std::endl;
	me->use(0, *bob);
	std::cout << "\nuse skill slot 1" << std::endl;
	me->use(1, *bob);
	std::cout << "\nuse skill slot 2" << std::endl;
	me->use(2, *bob);
	std::cout << "\nuse skill slot 3" << std::endl;
	me->use(3, *bob);

	Character::clearUnequiped();

	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;

	return (0);
}
