#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap one("Vasya");

	std::cout << std::endl;
	one.attack("Zombie");
	one.takeDamage(7);
	one.beRepaired(5);
	one.highFivesGuys();
	std::cout << std::endl;
	
	return 0;
}