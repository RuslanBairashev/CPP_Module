#include <iostream>
#include <string>

int	main()
{
	std::string		string("HI THIS IS BRAIN");
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Address by string    = " << &string << std::endl;
	std::cout << "Address by stringPTR = " << stringPTR << std::endl;
	std::cout << "Address by stringREF = " << &stringREF << std::endl;
	std::cout << "Content by stringPTR = " << *stringPTR << std::endl;
	std::cout << "Content by stringREF = " << stringREF << std::endl;
	
	return (0);
}