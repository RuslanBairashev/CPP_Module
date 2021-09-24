#include "Zombie.hpp"



int	main()
{
	Zombie	decay;
	Zombie	*atom = NULL;

	std::string in_decay;
	std::string in_atom;
	std::cout << "Please, enter zombi name for stack:\n";
	std::getline(std::cin, in_decay);
	if (std::cin.eof())
		return (1);
	decay.randomChump(in_decay);
	
	std::cout << "Please, enter zombi name for heap:\n";
	std::getline(std::cin, in_atom);
	if (std::cin.eof())
		return (1);
	atom = atom->newZombie(in_atom);
	delete atom;
	return (0);
}