#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructed\n";
}

Zombie::~Zombie()
{
	std::cout << m_name << " is destructed\n";
}

void	Zombie::announce(void)
{
	std::cout << " BraiiiiiiinnnzzzZ...\n";
}