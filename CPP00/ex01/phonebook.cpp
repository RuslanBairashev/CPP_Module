#include "phonebook.hpp"

int	main()
{
	phonebook kniga;
	
	std::string command("default");
	do
	{
		std::cout << "ENTER COMMAND(ADD/SEARCH/EXIT):\n";
		std::getline(std::cin, command);
		if (command == "ADD")
			kniga.add_contact(&kniga);
		else if (command == "SEARCH")
			kniga.search_contact(&kniga);
		else if (command != "EXIT")
			std::cout << command << ": not a valid command\n";
	}
	while (command != "EXIT");
	return (0);
}