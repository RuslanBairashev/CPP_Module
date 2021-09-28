#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap one("Vasya");

	std::cout << std::endl;
	one.attack("Zombie");
	one.takeDamage(7);
	one.beRepaired(5);
	one.highFivesGuys();
	std::cout << std::endl;
	
	return 0;
}