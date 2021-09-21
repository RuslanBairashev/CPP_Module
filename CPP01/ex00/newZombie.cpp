#include "Zombie.hpp"
/*
Zombie* Zombie::newZombie( std::string name )
{
	return new Zombie(name);
}
*/
Zombie* Zombie::newZombie( std::string name )
{
	Zombie	*aaa = new Zombie;
	aaa->m_name = name;
	std::cout << name;
	Zombie::announce();
	return aaa;
}