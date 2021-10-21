#include "span.hpp"

#define MAX 100

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
	try
	{
		extra.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//print_array(extra);
	try
	{
		std::cout << "The shortest span is: " << extra.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "The longest span is: " << extra.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "______Koko tests_____________\n";
	Span	koko = Span(10);
	static const int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	std::vector<int> sample (arr, arr + sizeof(arr) / sizeof(arr[0]) );
	std::vector<int>::iterator	ibegin;
	std::vector<int>::iterator	iend;
	ibegin = sample.begin();
	iend = sample.begin()+5;
	koko.addIter(ibegin, iend);
	print_array(koko);

	return 0;
}
