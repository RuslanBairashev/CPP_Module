#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie	*ret = new Zombie(name);

	return ret;
}