#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat() : _name(""), _grade(150) {}
	Bureaucrat(std::string name) : _name(name), _grade(150) {}
	Bureaucrat(std::string name, int grade);
	~Bureaucrat() {}
	Bureaucrat(const Bureaucrat& c_name);
	Bureaucrat&	operator=(const Bureaucrat& c_name);

	void		incGrade(Bureaucrat& c_name);
	void		decGrade(Bureaucrat& c_name);
	std::string	getName() const;
	int			getGrade() const;

	void		signForm(Form& c_name);

	class TooHigh: public std::exception
	{
		public:
			const char* what() const throw();
	};

	class TooLow: public std::exception
	{
		public:
			const char* what() const throw();
	};

private:
	const std::string	_name;
	int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& c_name);

#endif
