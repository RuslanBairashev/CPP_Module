#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "TEST1: Form with initial too high grade" << std::endl;
	Form		false1("FALSE1", 0, 0);
	std::cout << false1 << std::endl << std::endl;

	std::cout << "TEST2: Form with initial too low grade" << std::endl;
	Form		false2("FALSE2", 160, 160);
	std::cout << false2 << std::endl << std::endl;
	
	std::cout << "TEST3: Grade enought to sign" << std::endl;
	Bureaucrat	one("Vasya", 100);
	Form		ndfl2("2NDFL", 120, 110);
	std::cout << "Bureaucrat params: " << one << std::endl;
	std::cout << "Before signing: " << ndfl2 << std::endl;
	ndfl2.beSigned(one);
	std::cout << "After signing: "<< ndfl2 << std::endl << std::endl;

	std::cout << "TEST4: Grade not enought to sign" << std::endl;
	Form		ukaz("TO_ZERO", 1, 1);
	std::cout << "Before signing: " << ukaz << std::endl;
	ukaz.beSigned(one);
	std::cout << "After signing: "<< ukaz << std::endl << std::endl;



	return 0;
}