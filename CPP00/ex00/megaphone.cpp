#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char *argv[])
{
	int	i, j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0' && (argv[i][j] != ' ' || argv[i][j + 1] != '\0'))
			{
				if (argv[i][0] == ' ')
					j++;
				std::cout << static_cast<unsigned char>(std::toupper(argv[i][j]));
				j++;
			}
			if ((i + 1) != argc)
				std::cout << ' ';
			i++;
		}
	}
	std::cout << '\n';

	return (0);
}