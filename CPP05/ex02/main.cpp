#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"

void	print_tests(Bureaucrat& name, Form *fx)
{
	std::cout << name.getName() << " at work:" << std::endl;
	fx->execute(name);
	name.executeForm(*fx);
	fx->beSigned(name);
	fx->execute(name);
	name.executeForm(*fx);
}

int	main()
{
	Bureaucrat				boss("Volodimir", 1);
	Bureaucrat				clerk("Vasya", 50);
	Bureaucrat				intern("Tshenok", 150);
	ShrubberyCreationForm	f1("target");

	std::cout << "TEST1: ";
	print_tests(intern, &f1);
	std::cout << std::endl << "TEST2: " << std::endl;
	print_tests(clerk, &f1);
	std::cout << std::endl << "TEST3: " << std::endl;
	print_tests(boss, &f1);

	RobotomyCreationForm	f2("human");

	std::cout << std::endl << "TEST4: " << std::endl;
	print_tests(intern, &f2);
	std::cout << std::endl << "TEST5: " << std::endl;
	print_tests(clerk, &f2);
	std::cout << std::endl << "TEST6: " << std::endl;
	print_tests(boss, &f2);

	PresidentalPardonForm	f3("Innocent killer");

	std::cout << std::endl << "TEST7: " << std::endl;
	print_tests(intern, &f3);
	std::cout << std::endl << "TEST8: " << std::endl;
	print_tests(clerk, &f3);
	std::cout << std::endl << "TEST9: " << std::endl;
	print_tests(boss, &f3);

	return 0;
}