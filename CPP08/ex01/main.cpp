#include "span.hpp"

#define MAX 10000

void	print_array(Span & sp)
{
	unsigned	count = sp.getActN();
	for (unsigned i = 0; i < count; i++)
		std::cout << sp.getNumber(i) << std::endl;
}

int		RandomNumber () { return (std::rand() % 100000); }

int		main()
{
	Span	sp = Span(5);
	
	std::cout << "______Standart tests_____________\n";
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(1100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	print_array(sp);
	try
	{
		std::cout << "The shortest span is: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "The longest span is: " << sp.longestSpan() << std::endl;

	std::vector<int>	big (MAX);
	std::cout << std::endl << "______Extra tests_____________\n";
	std::srand ( unsigned ( std::time(0) ) );
	std::generate (big.begin(), big.end(), RandomNumber);
	Span	extra = Span(big);
	//print_array(extra);
	try
	{
		std::cout << "The shortest span is: " << extra.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "The longest span is: " << extra.longestSpan() << std::endl;

}

//https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators