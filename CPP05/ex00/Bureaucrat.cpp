#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		_grade = grade;
		if (grade < 1)
			throw Bureaucrat::TooHigh();
			//_grade = 1;
		else if (grade > 150)
			throw Bureaucrat::TooHigh();
			//_grade = 150;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::string	Bureaucrat::getName() const { return _name; }

int			Bureaucrat::getGrade() const {return _grade; }

Bureaucrat&	Bureaucrat::operator++()
{
	//if (_grade <= 1)
	//	throw CustomExcept("Error2");
	/*
	try
	{
		_grade--;
		if (_grade < 1)
			throw CustomExcept("Error2");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	//_grade--;*/
	_grade--;
	return *this;
}

Bureaucrat	Bureaucrat::operator++(int)
{
	Bureaucrat	temp = *this;
	++*this;
	return temp;
}

Bureaucrat&	Bureaucrat::operator--()
{
	_grade++;
	return *this;
}

Bureaucrat	Bureaucrat::operator--(int)
{
	Bureaucrat	temp = *this;
	++*this;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& c_name)
{
	os << c_name.getName() << ", bureaucrat grade " << c_name.getGrade();
	return os;
}