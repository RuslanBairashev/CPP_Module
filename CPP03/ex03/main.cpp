#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap one("Vasya");

	std::cout << "Name=" << one.getName() << std::endl;
	std::cout << "HP=" << one.getHP() << " (Must be 100)" << std::endl;
	std::cout << "EP=" << one.getEP() << " (Must be 50)" << std::endl;
	std::cout << "AD=" << one.getAD() << " (Must be 30)" << std::endl;
	std::cout << "______________________________" << std::endl;
	one.FragTrap::beRepaired(5);
	one.ScavTrap::beRepaired(5);

	std::cout << std::endl;
	one.attack("Zombie");
	one.takeDamage(7);
	one.beRepaired(5);
	one.guardGate();
	one.highFivesGuys();
	std::cout << std::endl;

	
	return 0;
}