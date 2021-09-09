#include <iostream>
#include <cctype>
#include <cstring>

int	main()
{
	std::string command("default");
	do
	{
	std::cout << "ENTER COMMAND(ADD/SEARCH/EXIT):\n";
	std::cin >> command;
	std::cout << command << " command has been entered\n";
	}
	while (command != "ADD" && command != "SEARCH" && command != "EXIT");
	return (0);
}