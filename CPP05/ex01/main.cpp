#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	one("Vasya", 100);
	std::cout << "TEST1: Bureaucrat with valid grade" << std::endl;
	std::cout << one << std::endl;
	std::cout << "TEST1: Bureaucrat with valid grade increment" << std::endl;
	one.incGrade(one);
	std::cout << one << std::endl;
	std::cout << "TEST1: Bureaucrat with valid grade decrement" << std::endl;
	one.decGrade(one);
	std::cout << one << std::endl << std::endl;

	Bureaucrat	two("Vasya", 1);
	std::cout << "TEST2: Bureaucrat with max grade increment" << std::endl;
	two.incGrade(two);
	std::cout << two << std::endl << std::endl;

	Bureaucrat	three("Vasya", 150);
	std::cout << "TEST3: Bureaucrat with min grade decrement" << std::endl;
	three.decGrade(three);
	std::cout << three << std::endl << std::endl;

	Bureaucrat	four("Vasya", 0);
	std::cout << "TEST4: Bureaucrat with initial too high grade" << std::endl;
	std::cout << four << std::endl << std::endl;

	Bureaucrat	five("Vasya", 300);
	std::cout << "TEST5: Bureaucrat with initial too low grade" << std::endl;
	std::cout << five << std::endl;

	return 0;
}