#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*aaa = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		aaa[i].m_name = name;
		std::cout << &aaa[i] << " " << i << " " << name;
		Zombie::announce();
	}
	return aaa;
}