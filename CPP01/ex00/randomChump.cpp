#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	m_name = name;
	std::cout << name;
	Zombie::announce();
}