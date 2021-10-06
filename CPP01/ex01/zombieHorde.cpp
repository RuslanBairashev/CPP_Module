#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	char	str('A');
	Zombie	*aaa = new Zombie[N];
	for(int i = 0; i < N; i++, str++)
	{
		aaa[i].m_name = name + str;
		std::cout << "Address of Zombie "<< i << " is :" << &aaa[i] << std::endl;
	}
	return aaa;
}