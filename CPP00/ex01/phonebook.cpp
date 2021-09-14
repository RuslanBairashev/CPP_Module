#include "phonebook.hpp"

void	init_phonebook(phonebook *c_name)
{
	c_name->contact_count = 0;
	for (int i = 0; i < (book_size * 5); i++)
		c_name->m_array[i] = "";
}

int	main()
{
	phonebook kniga;
	
	init_phonebook(&kniga);
	std::string command("default");
	do
	{
		std::cout << "ENTER COMMAND(ADD/SEARCH/EXIT):\n";
		std::getline(std::cin, command);
		if (command == "ADD")
			add_contact(&kniga);
		else if (command == "SEARCH")
			search_contact(&kniga);
		else if (command != "EXIT")
			std::cout << command << ": not a valid command\n";
	}
	while (command != "EXIT");
	return (0);
}