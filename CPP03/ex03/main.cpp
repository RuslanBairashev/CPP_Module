#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "_______Construction__________________" << std::endl;
	DiamondTrap one("Vasya");

	std::cout << "_______Attributes____________________" << std::endl;
	std::cout << "HP=" << one.getHP() << " (Must be 100)" << std::endl;
	std::cout << "EP=" << one.getEP() << " (Must be 50)" << std::endl;
	std::cout << "AD=" << one.getAD() << " (Must be 30)" << std::endl;
	one.whoAmI();

	std::cout << "_______Functions_____________________" << std::endl;
	one.attack("Zombie");
	one.takeDamage(7);
	one.beRepaired(5);
	one.guardGate();
	one.highFivesGuys();
	std::cout << std::endl;

	std::cout << "_______Destruction___________________" << std::endl;
	return 0;
}