#include "Zombie.hpp"



int	main()
{
	Zombie	decay("decay");
	Zombie	*atom = NULL;

	decay.announce();
	
	atom = atom->newZombie("atom");
	atom->announce();

	decay.randomChump("Chumpy");
	
	delete atom;
	return (0);
}