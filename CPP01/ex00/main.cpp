#include "Zombie.hpp"

void	announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ...\n";
}

int	main()
{
	Zombie	decay;
	std::string stringi;
	std::getline(std::cin, stringi);
	announce();
	return (0);
}