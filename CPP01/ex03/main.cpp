#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon		club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	
	{
		Weapon		club = Weapon("crude spiked club");
		Weapon*		dub;
		HumanB jim("Jim");
		jim.setWeapon(club);
		std::cout << club.getType() << std::endl;
		dub = &club;
		std::cout << dub->getType() << std::endl;
		std::cout << jim._typeW->getType() << std::endl;
		jim.attack();
		club.setType("some other type of club");
		std::cout << club.getType() << std::endl;
		jim.attack();
	}
	return (0);
}