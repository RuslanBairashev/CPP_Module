#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>

const int   book_size = 2;

class phonebook
{
private:
    /* data */
public:
    int         cont_number;
    //const int   book_size = 8;
    std::string m_search;
    std::string m_array[book_size * 5];
    //phonebook(/* args */);
    //~phonebook();
};

#endif
