#include "phonebook.hpp"
/*
bool	check_input(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

void	print_contact(phonebook *c_name, int index)
{
	std::cout << "***************" << "\n";
    std::cout << "FIRST NAME    : " << c_name->m_array[index * 5 + 0] << "\n";
	std::cout << "LAST NAME     : " << c_name->m_array[index * 5 + 1] << "\n";
	std::cout << "NICKNAME      : " << c_name->m_array[index * 5 + 2] << "\n";
	std::cout << "phone number  : " << c_name->m_array[index * 5 + 3] << "\n";
	std::cout << "darkest secret: " << c_name->m_array[index * 5 + 4] << "\n";
    std::cout << "***************" << "\n";
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
				std::cout << " ";
			std::cout << tmp;
		}
		if ((i - line_num * 5) != 2)
			std::cout << "|";
	}
	std::cout << "\n";
}
*/

void	phonebook::search_contact(phonebook *c_name)
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	std::cout << c_name->_array[0].getFirstname();
	/*
	for (int i = 0; i < c_name->contact_count; i++)
		print_line(c_name, i);
	std::string str;
	bool is_digit;
	while (true)
	{
		std::cout << "ENTER CONTACT'S INDEX TO DISPLAY:\n";
		while (true)
		{
			std::getline(std::cin, str);
			is_digit = check_input(str);
			if (is_digit)
				break ;
			std::cout << "INPUT IS NOT VALID. TRY AGAIN.\n";
		}
		int	index = std::atoi(str.c_str());
		if (index >= 0 && index < c_name->contact_count)
		{
			print_contact(c_name, index);
			break ;
		}
		else
			std::cout << "INDEX IS OUT OF RANGE.\n";
	}
	*/
}
