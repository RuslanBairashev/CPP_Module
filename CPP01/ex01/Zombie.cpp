#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructed\n";
}

Zombie::Zombie(std::string str) : m_name(str)
{
	std::cout << "Constructed\n";
}

Zombie::~Zombie()
{
	std::cout << this->m_name << " is destructed\n";
}

void	Zombie::announce(void)
{
	std::cout << " BraiiiiiiinnnzzzZ...\n";
}