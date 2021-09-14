#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

const int   book_size = 8;

class phonebook
{
public:
    int         contact_count;
    std::string m_array[book_size * 5];
};

void	move_list_up(phonebook *c_name);
void	add_contact(phonebook *c_name);
bool	check_input(const std::string &str);
void	print_contact(phonebook *c_name, int index);
void	print_line(phonebook *c_name, int line_num);
void	search_contact(phonebook *c_name);

#endif
