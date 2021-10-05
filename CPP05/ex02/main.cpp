#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	//std::cout << "TEST1: Form with initial too high grade" << std::endl;
	//Form		false1("FALSE1", 0, 0);
	//std::cout << false1 << std::endl << std::endl;
	Bureaucrat				boss("Volodimir", 1);
	Bureaucrat				clerk("Vasya", 150);
	ShrubberyCreationForm	f1("target");

	std::cout << "TEST1: Intern clerk at work:" << std::endl;
	f1.execute(clerk);
	clerk.executeForm(f1);
	f1.beSigned(clerk);
	f1.execute(clerk);
	clerk.executeForm(f1);

	std::cout << std::endl << "TEST2: Boss at work:" << std::endl;
	f1.execute(boss);
	boss.executeForm(f1);
	f1.beSigned(boss);
	f1.execute(boss);
	boss.executeForm(f1);

	return 0;
}