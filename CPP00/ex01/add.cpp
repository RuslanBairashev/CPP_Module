#include "phonebook.hpp"

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