#include "phonebook.hpp"

void	init_phonebook(phonebook *c_name)
{
	c_name->cont_number = 0;
}

void	move_list_up(phonebook *c_name)
{
	c_name->cont_number = 7;
}

void	add_contact(phonebook *c_name)
{
	if (c_name->cont_number > 7)
		move_list_up(c_name);
	std::cout << c_name->cont_number << std::endl;
	std::cout << "ENTER NEW CONTACT'S FIRST NAME\n";
	std::cin >> c_name->m_array[c_name->cont_number * 5 + 0];
	std::cout << "ENTER NEW CONTACT'S LAST NAME\n";
	std::cin >> c_name->m_array[c_name->cont_number * 5 + 1];
	std::cout << "ENTER NEW CONTACT'S NICKNAME\n";
	std::cin >> c_name->m_array[c_name->cont_number * 5 + 2];
	std::cout << "ENTER NEW CONTACT'S PHONE NUMBER\n";
	std::cin >> c_name->m_array[c_name->cont_number * 5 + 3];
	std::cout << "ENTER NEW CONTACT'S DARKEST SECRET\n";
	std::cin >> c_name->m_array[c_name->cont_number * 5 + 4];
	std::cout << "NEW CONTACT ADDED!\n";
	c_name->cont_number++;
}

int	main()
{
	phonebook kniga;
	
	init_phonebook(&kniga);
	std::string command("default");
	do
	{
	std::cout << "ENTER COMMAND(ADD/SEARCH/EXIT):\n";
	std::cin >> command;
	if (command == "ADD")
		add_contact(&kniga);
	std::cout << command << " command has been entered\n";
	}
	while (command != "ADD" && command != "SEARCH" && command != "EXIT");
	for(int i = 0; i < 40; i++)
	{
		std::cout << kniga.m_array[i] << "\n";
	}
	return (0);
}