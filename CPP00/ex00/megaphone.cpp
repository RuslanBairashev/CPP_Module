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
		std::string str;
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			j = 0;
			while (str[j] != '\0')
			{
				std::cout << static_cast<unsigned char>(std::toupper(str[j]));
				j++;
			}
			i++;
		}
	}
	std::cout << '\n';

	return (0);
}