#include "Zombie.hpp"

Zombie::Zombie() : m_name("")
{
	std::cout << this->m_name << " constructed\n";
}

Zombie::Zombie(std::string str) : m_name(str)
{
	std::cout << this->m_name << " constructed\n";
}

Zombie::~Zombie()
{
	std::cout << this->m_name << " is destructed\n";
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ...\n";
}