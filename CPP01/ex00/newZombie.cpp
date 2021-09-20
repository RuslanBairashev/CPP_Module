#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie	*aaa = new Zombie;
	std::cout << name;
	Zombie::announce();

	return aaa;
}