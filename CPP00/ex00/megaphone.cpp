#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			std::cout << argv[i];
			if ((i + 1) != argc)
				std::cout << ' ';
			i++;
		}
	}
	std::cout << '\n';
	std::cout << std::toupper('a');
	std::cout << '\n';
	return (0);
}