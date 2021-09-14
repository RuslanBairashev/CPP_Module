#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

const int   book_size = 2;

class phonebook
{
private:
    /* data */
public:
    int         contact_count;
    std::string m_search;
    std::string m_array[book_size * 5];
    //phonebook(/* args */);
    //~phonebook();
};

void	move_list_up(phonebook *c_name);
void	add_contact(phonebook *c_name);

#endif
