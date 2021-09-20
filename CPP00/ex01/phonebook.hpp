#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

const int	book_size = 8;

class Contact
{
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
public:
	void	setFirstname(std::string str)
	{
		_firstname = str;
	}
	void	setLastname(std::string str)
	{
		_lastname = str;
	}
	void	setNickname(std::string str)
	{
		_nickname = str;
	}
	void	setPhone(std::string str)
	{
		_phone = str;
	}
	void	setSecret(std::string str)
	{
		_secret = str;
	}
};

class phonebook
{
private:
	int		contact_count;
	Contact	_array[book_size];

public:
	phonebook()
	{
		contact_count = 0;
	};

	int		getContact_count();
	void	move_list_up(phonebook *c_name);
	void	add_contact(phonebook *c_name);
	bool	check_input(const std::string &str);
	void	print_contact(phonebook *c_name, int index);
	void	print_line(phonebook *c_name, int line_num);
	void	search_contact(phonebook *c_name);
};

#endif
