#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"
#include <string>
#include <map>

Intern::Intern(const Intern& c_name)
{
	*this = c_name;
}

Intern&	Intern::operator=(const Intern& c_name)
{
	if (this == &c_name)
		return *this;
	return *this;
}

enum	forms
	{
		NOT_DEFINED,
		SHRUBBERY,
		ROBOTOMY,
		PRESIDENTAL
	};

Form* Intern::makeForm(std::string f_name, std::string target)
{
	Form *ret = NULL;
	
	std::map<std::string, forms> map_forms;

	map_forms["shrubbery creation"] = SHRUBBERY;
	map_forms["robotomy request"] = ROBOTOMY;
	map_forms["presidental pardon"] = PRESIDENTAL;

	switch (map_forms[f_name])
	{
	case SHRUBBERY:
		ret = new ShrubberyCreationForm(target);
		std::cout << std::endl;
		break;
	case ROBOTOMY:
		ret = new RobotomyCreationForm(target);
		std::cout << std::endl;
		break;
	case PRESIDENTAL:
		ret = new PresidentalPardonForm(target);
		std::cout << std::endl;
		break;
	default:
		std::cout << "Error: form is unknown!" << std::endl;
		break;
	}
	return ret;

}