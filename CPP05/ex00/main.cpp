#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	one("Vasya", 2000);

	std::cout << one << std::endl;
	try
	{
		++one;
		if (one.getGrade() < 1)
			//throw TooHigh("Error2");
			throw Bureaucrat::TooHigh();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << one << std::endl;
	//one++;
	//std::cout << one << std::endl;
	return 0;
}