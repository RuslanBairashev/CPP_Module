#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
/*
class CustomExcept: public std::exception
{
private:
	std::string	_error;
public:
	CustomExcept(std::string msg_error) : _error(msg_error) {}
	//const char* what() const noexcept override { return _error.c_str(); } //C++11
	const char* what() const throw() { return _error.c_str(); }
};
*/
class Bureaucrat
{
public:
	Bureaucrat() : _name(""), _grade(150) {}
	Bureaucrat(std::string name) : _name(name), _grade(150) {}
	Bureaucrat(std::string name, int grade);
	~Bureaucrat() {}

	Bureaucrat&	operator++(); //prefix
	Bureaucrat	operator++(int); //postfix
	Bureaucrat&	operator--(); //prefix
	Bureaucrat	operator--(int); //postfix
	std::string	getName() const;
	int			getGrade() const;

	class TooHigh: public std::exception
	{
		public:
			const char* what() const throw() { return "error15"; }
	};

private:
	const std::string	_name;
	int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& c_name);

#endif
