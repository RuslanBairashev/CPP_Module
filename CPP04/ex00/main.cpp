#include "Animals.hpp"
#include "WrongAnimals.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << std::endl << "Animal class tests: " << std::endl;
	std::cout << i->getType() << " says ";
	i->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() << " says ";
	j->makeSound();
	std::cout << std::endl;
	meta->makeSound();
	std::cout << std::endl << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	const WrongAnimal* wj = new WrongDog();

	std::cout << std::endl << "WrongAnimal class tests: " << std::endl;
	std::cout << wi->getType() << " says ";
	wi->makeSound();
	std::cout << std::endl;
	std::cout << wj->getType() << " says ";
	wj->makeSound();
	std::cout << std::endl;
	wmeta->makeSound();
	std::cout << std::endl << std::endl;

	delete meta;
	delete i;
	delete j;
	delete wmeta;
	delete wi;
	delete wj;
	return 0;
}