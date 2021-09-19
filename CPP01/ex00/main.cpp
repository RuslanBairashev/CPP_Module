#include "Zombie.hpp"

void	announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ...\n";
}

int	main()
{
	Zombie	decay;
	Zombie	*zomby = new Zombie;

	std::string in_decay;
	std::string in_zomby;
	std::cout << "Please, enter zombi name for stack:\n";
	std::getline(std::cin, in_decay);
	decay.randomChump(in_decay);
	std::cout << "Please, enter zombi name for heap:\n";
	std::getline(std::cin, in_zomby);
	zomby->newZombie(in_zomby);
	return (0);
}