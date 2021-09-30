#include "Materia.hpp"
#include "Character.hpp"
#include "Source.hpp"

int	main()
{
	Ice	tmp;
	std::cout << tmp.getType() << std::endl;
	tmp.use();

	ICharacter* me = new Character("me");
	std::cout << me->getName() << std::endl;

	
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());

	//ICharacter* me = new Character("me");
/*
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	*/
	return 0;
}