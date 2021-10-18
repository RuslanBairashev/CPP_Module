#include "iter.hpp"

int	main()
{
	char		char_arr[] = { 'e', 'c', 'o', 'l', 'e' };
	int			int_arr[] = { 0, 1, 2, 3, 4 };
	double		double_arr[] = { 1.3, 5.7, 10.15 };
	std::string str_arr[] = { "Hello", " moto" };

	iter(char_arr, 5, print);
	iter(int_arr, 5, print);
	iter(double_arr, 3, print);
	iter(str_arr, 2, print);

	Awesome tab2[5];
	iter( tab2, 5, print );

	return 0;
}