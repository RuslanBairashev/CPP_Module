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
	void	setFirstname(std::string str){ _firstname = str; }
	void	setLastname(std::string str){ _lastname = str; }
	void	setNickname(std::string str){ _nickname = str; }
	void	setPhone(std::string str){ _phone = str; }
	void	setSecret(std::string str){ _secret = str; }
	std::string	getFirstname() const { return _firstname; }
	std::string	getLastname() const { return _lastname; }
	std::string	getNickname() const { return _nickname; }
	std::string	getPhone() const { return _phone; }
	std::string	getSecret() const { return _secret; }
};

class phonebook
{
private:
	int		_contact_count;
	Contact	_array[book_size];

public:
	phonebook()
	{
		_contact_count = 0;
	};

	int		getContact_count() const { return _contact_count; }
	void	add_contact(phonebook *c_name);
	void	move_list_up(phonebook *c_name);
	bool	check_input(const std::string &str);
	void	print_contact(phonebook *c_name, int index);
	void	print_line(phonebook *c_name);
	void	search_contact(phonebook *c_name);
};

#endif
