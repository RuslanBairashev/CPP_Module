#include "Form.hpp"

const char* Form::TooHigh::what() const throw()
{
	return "Form::GradeTooHighException";
}

const char* Form::TooLow::what() const throw()
{
	return "Form::GradeTooLowException";
}

Form::Form(std::string name, int sign_grade, int exec_grade) \
: _formName(name), _signGrade(150), _execGrade(150)
{
	try
	{
		if (_signGrade < 1 || _signGrade < 1)
			throw Form::TooHigh();
		else if (_signGrade > 150 || _execGrade > 150)
			throw Form::TooLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(const Form& c_name)
{
	*this = c_name;
}

Form&	Form::operator=(const Form& c_name)
{
	if (this == &c_name)
		return *this;
	this->_isSigned = c_name._isSigned;
	return *this;
}

std::string	Form::getName() const { return _formName; }
bool		Form::getStatus() const { return _isSigned; }
int			Form::getSignGrade() const {return _signGrade; }
int			Form::getExecGrade() const {return _execGrade; }

void	Form::beSigned(Bureaucrat& c_name)
{
	try
	{
		if (c_name.getGrade() > this->getSignGrade())
			throw Form::TooLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	this->_isSigned = true;
	c_name.signForm(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& c_name)
{
	os << c_name.getName() << ", bureaucrat grade " << c_name.getGrade();
	return os;
}