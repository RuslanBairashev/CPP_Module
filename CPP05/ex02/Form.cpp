#include "Form.hpp"

const char* Form::TooHigh::what() const throw()
{
	return "Form::GradeTooHighException";
}

const char* Form::TooLow::what() const throw()
{
	return "Form::GradeTooLowException";
}

const char* Form::NotSigned::what() const throw()
{
	return "Form::FormNotSignedException";
}

Form::Form(std::string name, int sign_grade, int exec_grade) \
: _formName(name), _isSigned(false), _signGrade(sign_grade), _execGrade(exec_grade)
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

Form::Form(const Form& c_name)\
: _formName(c_name._formName), _signGrade(c_name._signGrade), _execGrade(c_name._execGrade)
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
/*
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
*/

void	Form::beSigned(Bureaucrat& c_name)
{
	try
	{
		c_name.signForm(*this);
		this->_isSigned = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream& operator<<(std::ostream& os, const Form& c_name)
{
	std::cout << std::boolalpha;
	os << "Form " << c_name.getName() << " signed status: " << c_name.getStatus();
	os << ".\nParameters: signGrade: " << c_name.getSignGrade();
	os << ", execGrade: " << c_name.getExecGrade() << std::endl;
	return os;
}