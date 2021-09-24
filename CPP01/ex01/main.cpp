#include "Zombie.hpp"

int	main()
{
	Zombie	*atom = NULL;

	std::string in_atom;	
	std::cout << "Please, enter zombi name for heap:\n";
	std::getline(std::cin, in_atom);
	if (std::cin.eof())
		return (1);
	atom = atom->zombieHorde(10, in_atom);
	std::cout << "The pointer to the first = " << &(atom[0]) << std::endl;
	delete [] atom;
	return (0);
}