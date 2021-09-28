#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap one("Vasya");

	std::cout << std::endl;
	one.attack("Zombie");
	one.ClapTrap::takeDamage(7);
	one.ClapTrap::beRepaired(5);
	one.guardGate();
	std::cout << std::endl;
	
	return 0;
}