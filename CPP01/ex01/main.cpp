#include "Zombie.hpp"

int	main()
{
	int			N(4);
	std::string z_name("default");
	Zombie		*atom = NULL;

	atom = atom->zombieHorde(N, z_name);
	std::cout << "The pointer to the first = " << &(atom[0]) << std::endl;
	for(int i = 0; i < N; i++)
		(atom[i]).announce();
	
	delete [] atom;
	return (0);
}