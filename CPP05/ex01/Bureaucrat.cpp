#include "Bureaucrat.hpp"

const char* Bureaucrat::TooHigh::what() const throw()
{
	return "Bureaucrat::GradeTooHighException";
}

const char* Bureaucrat::TooLow::what() const throw()
{
	return "Bureaucrat::GradeTooLowException";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		_grade = grade;
		if (grade < 1)
			throw Bureaucrat::TooHigh();
		else if (grade > 150)
			throw Bureaucrat::TooLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& c_name)
{
	*this = c_name;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& c_name)
{
	if (this == &c_name)
		return *this;
	this->_grade = c_name._grade;
	return *this;
}

std::string	Bureaucrat::getName() const { return _name; }

int			Bureaucrat::getGrade() const {return _grade; }

void	Bureaucrat::incGrade(Bureaucrat& c_name)
{
	try
	{
		c_name._grade--;
		if (_grade < 1)
			throw Bureaucrat::TooHigh();
		else if (_grade > 150)
			throw Bureaucrat::TooLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::decGrade(Bureaucrat& c_name)
{
	try
	{
		c_name._grade++;
		if (_grade < 1)
			throw Bureaucrat::TooHigh();
		else if (_grade > 150)
			throw Bureaucrat::TooLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::signForm(Form& c_name)
{
	if (this->_grade > c_name.getSignGrade())
	{
		std::cout << this->getName() << " cannot sign " << c_name.getName();
		std::cout << " because " << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& c_name)
{
	os << c_name.getName() << ", bureaucrat grade " << c_name.getGrade();
	return os;
}