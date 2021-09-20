#include "Zombie.hpp"



int	main()
{
	Zombie	decay;
	Zombie	*atom = new Zombie;

	std::string in_decay;
	std::string in_atom;
	std::cout << "Please, enter zombi name for stack:\n";
	std::getline(std::cin, in_decay);
	decay.randomChump(in_decay);
	std::cout << "Please, enter zombi name for heap:\n";
	std::getline(std::cin, in_atom);
	atom->newZombie(in_atom);
	return (0);
}