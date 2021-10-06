#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie	some(name);

	some.announce();
}