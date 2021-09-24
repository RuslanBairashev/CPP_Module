#include "phonebook.hpp"

void	phonebook::move_list_up(phonebook *c_name)
{
	for (int i = 0; i < (book_size - 1); i++)
	{
		c_name->_array[i].setFirstname(c_name->_array[i + 1].getFirstname());
		c_name->_array[i].setLastname(c_name->_array[i + 1].getLastname());
		c_name->_array[i].setNickname(c_name->_array[i + 1].getNickname());
		c_name->_array[i].setPhone(c_name->_array[i + 1].getPhone());
		c_name->_array[i].setSecret(c_name->_array[i + 1].getSecret());
		c_name->_contact_count--;
	}
}

void	phonebook::add_contact(phonebook *c_name)
{
	std::string	tmp;
	if (c_name->getContact_count() == book_size)
		move_list_up(c_name);
	std::cout << "ENTER NEW CONTACT'S FIRST NAME\n";
	std::getline(std::cin, tmp);
	c_name->_array[_contact_count].setFirstname(tmp);
	std::cout << "ENTER NEW CONTACT'S LAST NAME\n";
	std::getline(std::cin, tmp);
	c_name->_array[_contact_count].setLastname(tmp);
	std::cout << "ENTER NEW CONTACT'S NICKNAME\n";
	std::getline(std::cin, tmp);
	c_name->_array[_contact_count].setNickname(tmp);
	std::cout << "ENTER NEW CONTACT'S PHONE NUMBER\n";
	std::getline(std::cin, tmp);
	c_name->_array[_contact_count].setPhone(tmp);
	std::cout << "ENTER NEW CONTACT'S DARKEST SECRET\n";
	std::getline(std::cin, tmp);
	c_name->_array[_contact_count].setSecret(tmp);
	std::cout << "NEW CONTACT ADDED!\n";
	c_name->_contact_count++;
}