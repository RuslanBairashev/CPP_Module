#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form() : _formName(""), _isSigned(false), _signGrade(150), _execGrade(150) {}
	Form(std::string name) : _formName(name), _isSigned(false) ,_signGrade(150), _execGrade(150) {}
	Form(std::string name, int sign_grade, int exec_grade);
	virtual ~Form() {}
	Form(const Form& c_name);
	Form&	operator=(const Form& c_name);

	std::string	getName() const;
	bool		getStatus() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void	beSigned(Bureaucrat& c_name);
	virtual void	execute(Bureaucrat const & executor) const = 0;

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

	class NotSigned: public std::exception
	{
		public:
			const char* what() const throw();
	};

private:
	const std::string	_formName;
	bool				_isSigned;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& c_name);

#endif
