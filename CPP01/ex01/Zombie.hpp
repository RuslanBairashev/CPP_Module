#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

class Zombie
{
public:
	Zombie();
	Zombie(std::string str);
	~Zombie();
	
	Zombie*	zombieHorde( int N, std::string name );

private:
	std::string	m_name;

	void	announce(void);
};

#endif
