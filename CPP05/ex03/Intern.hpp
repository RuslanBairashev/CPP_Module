#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class Form;

class Intern
{
public:
	Intern() {}
	~Intern() {}
	Intern(const Intern& c_name);
	Intern&	operator=(const Intern& c_name);

	Form* makeForm(std::string f_name, std::string target);
};

#endif