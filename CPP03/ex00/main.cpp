#include "ClapTrap.hpp"

int	main()
{
	ClapTrap one("Vasya");
	one.attack("Zombie");
	one.takeDamage(7);
	one.beRepaired(5);

	return 0;
}