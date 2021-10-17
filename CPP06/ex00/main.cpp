#include "Casting.hpp"


int	print_err(std::string str)
{
	std::cout << str << std::endl;
	return 1;
}

int	main(int ac, char** av)
{
	std::string	input_str;

	if (ac != 2)
		return print_err("Error: number of arguments must 2!");

	Casting	Mycast(av[1]);
	if (Mycast.is_char())
		if(Mycast.is_int())
			if(Mycast.is_float())
				if(Mycast.is_naninf())
					Mycast.is_impossible();
	Mycast.print_res();

	return 0;
}