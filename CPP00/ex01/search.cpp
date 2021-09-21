#include "phonebook.hpp"

bool	phonebook::check_input(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

void	phonebook::print_contact(phonebook *c_name, int index)
{
	std::cout << "***************" << "\n";
	std::cout << "FIRST NAME    : " << c_name->_array[index].getFirstname() << "\n";
	std::cout << "LAST NAME     : " << c_name->_array[index].getLastname() << "\n";
	std::cout << "NICKNAME      : " << c_name->_array[index].getNickname() << "\n";
	std::cout << "phone number  : " << c_name->_array[index].getPhone() << "\n";
	std::cout << "darkest secret: " << c_name->_array[index].getSecret() << "\n";
	std::cout << "***************" << "\n";
}

void	phonebook::print_line(phonebook *c_name)
{
	std::string	tmp;

	for (int i = 0; i < c_name->_contact_count; i++)
	{
		std::cout << "         " << i << "|";
		std::string tmp = c_name->_array[i].getFirstname().substr(0, 9);
		if (c_name->_array[i].getFirstname().length() > 9)
			std::cout << tmp << ".";
		else
		{
			for (int j = c_name->_array[i].getFirstname().length(); j < 10; j++)
				std::cout << " ";
			std::cout << tmp;
		}
		std::cout << "|";
		tmp = c_name->_array[i].getLastname().substr(0, 9);
		if (c_name->_array[i].getLastname().length() > 9)
			std::cout << tmp << ".";
		else
		{
			for (int j = c_name->_array[i].getLastname().length(); j < 10; j++)
				std::cout << " ";
			std::cout << tmp;
		}
		std::cout << "|";
		tmp = c_name->_array[i].getNickname().substr(0, 9);
		if (c_name->_array[i].getNickname().length() > 9)
			std::cout << tmp << ".";
		else
		{
			for (int j = c_name->_array[i].getNickname().length(); j < 10; j++)
				std::cout << " ";
			std::cout << tmp;
		}
		std::cout << "\n";
	}
}


void	phonebook::search_contact(phonebook *c_name)
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	print_line(c_name);
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
		if (index >= 0 && index < c_name->_contact_count)
		{
			print_contact(c_name, index);
			break ;
		}
		else
			std::cout << "INDEX IS OUT OF RANGE.\n";
	}
}
