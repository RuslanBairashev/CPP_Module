#include "phonebook.hpp"

void	init_phonebook(phonebook *c_name)
{
	c_name->cont_number = 0;
	c_name->m_search = "";
	for (int i = 0; i < (book_size * 5); i++)
	{
		c_name->m_array[i] = "";
	}
}

void	move_list_up(phonebook *c_name)
{
	for (int i = 0; i < (book_size - 1); i++)
	{
		c_name->m_array[i * 5 + 0] = c_name->m_array[(i + 1) * 5 + 0];
		c_name->m_array[i * 5 + 1] = c_name->m_array[(i + 1) * 5 + 1];
		c_name->m_array[i * 5 + 2] = c_name->m_array[(i + 1) * 5 + 2];
		c_name->m_array[i * 5 + 3] = c_name->m_array[(i + 1) * 5 + 3];
		c_name->m_array[i * 5 + 4] = c_name->m_array[(i + 1) * 5 + 4];
	}
	c_name->cont_number = (book_size - 1);
}

void	print_line(phonebook *c_name, int line_num)
{
	std::string	tmp;

	std::cout << "         " << line_num << "|";
	for (int i = line_num * 5; i < (5 * (line_num + 1) - 2); i++)
	{
		std::string tmp = c_name->m_array[i].substr(0, 9);
		if (c_name->m_array[i].length() > 9)
			std::cout << tmp << ".";
		else
		{
			for (int j = c_name->m_array[i].length(); j < 10; j++)
			{
				std::cout << " ";
			}
			std::cout << tmp;
		}
		if ((i - line_num * 5) != 2)
			std::cout << "|";
	}
	std::cout << "\n";
}

int	get_index(phonebook *c_name)
{
	int index;
	std::cin >> index;
	if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
	{
		std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
		std::cin.ignore(32767,'\n'); // и удаляем значения предыдущего ввода из входного буфера
		std::cout << "INPUT IS NOT VALID! PLEASE, ENTER INDEX\n";
	}
	else
	{
		std::cin.ignore(32767,'\n'); // удаляем лишние значения
		return index;
	}

}

void	search_contact(phonebook *c_name)
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	for (int i = 0; i < c_name->cont_number; i++)
	{
		print_line(c_name, i);
	}
	std::cout << "ENTER CONTACT'S INDEX TO DISPLAY:\n";
	int index;
	index = get_index(c_name);


}

void	add_contact(phonebook *c_name)
{
	if (c_name->cont_number > (book_size - 1))
		move_list_up(c_name);
	std::cout << "ENTER NEW CONTACT'S FIRST NAME\n";
	std::cin.ignore(32767, '\n');
	std::getline(std::cin, c_name->m_array[c_name->cont_number * 5 + 0]);
	std::cout << "ENTER NEW CONTACT'S LAST NAME\n";
	std::getline(std::cin, c_name->m_array[c_name->cont_number * 5 + 1]);
	std::cout << "ENTER NEW CONTACT'S NICKNAME\n";
	std::getline(std::cin, c_name->m_array[c_name->cont_number * 5 + 2]);
	std::cout << "ENTER NEW CONTACT'S PHONE NUMBER\n";
	std::getline(std::cin, c_name->m_array[c_name->cont_number * 5 + 3]);
	std::cout << "ENTER NEW CONTACT'S DARKEST SECRET\n";
	std::getline(std::cin, c_name->m_array[c_name->cont_number * 5 + 4]);
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
	if (command == "SEARCH")
		search_contact(&kniga);
	std::cout << command << " command has been entered\n";
	}
	while (command != "EXIT");
	for(int i = 0; i < (book_size * 5); i++)
	{
		std::cout << kniga.m_array[i] << "\n";
	}
	return (0);
}