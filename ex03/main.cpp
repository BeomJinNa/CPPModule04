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

	me->use(0, *bob);
	me->use(1, *bob);

	Character::clearUnequiped();

	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;

	return (0);
}
