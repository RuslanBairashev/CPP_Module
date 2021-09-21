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
	
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );
	static Zombie*	Zombies( std::string name );

private:
	std::string	m_name;

	void	announce(void);
};

#endif
