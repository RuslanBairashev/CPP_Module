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

bool	check_input(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
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
/*
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
*/
void	search_contact(phonebook *c_name)
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	for (int i = 0; i < c_name->cont_number; i++)
	{
		print_line(c_name, i);
	}
	std::string str;
	bool is_digit;
	while (true)
	{
		std::cout << "ENTER CONTACT'S INDEX TO DISPLAY:\n";
		while (true)
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::getline(std::cin, str);
			//std::cin >> str;
			is_digit = check_input(str);
			if (is_digit)
			{
				std::cout << "azaza\n";
				break ;
			}
	
			std::cout << "INPUT IS NOT VALID. TRY AGAIN.\n";
		}
		int	index = std::atoi(str.c_str());
		if (index >= 0 && index <= c_name->cont_number)
		{
			std::cout << "!";
			break ;
		}
		else
			std::cout << "INDEX IS OUT OF RANGE. TRY AGAIN\n";
	}
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