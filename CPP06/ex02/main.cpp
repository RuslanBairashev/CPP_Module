#include <iostream>
#include <cstdlib>

class	Base
{
	public:
		virtual ~Base() {}
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base*	generate(void)
{
	srand(time(NULL));
	switch (rand() % 3 + 1)
	{
	case 1:
		std::cout << "A class initialized" << std::endl;
		return new A;
		break;
	case 2:
		std::cout << "B class initialized" << std::endl;
		return new B;
		break;
	case 3:
		std::cout << "C class initialized" << std::endl;
		return new C;
		break;
	default:
		return NULL;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "\"A\"" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "\"B\"" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "\"C\"" << std::endl;
	else
		std::cout << "Error: No match class" << std::endl;
}

void	identify(Base& p)
{
	Base tmp;
	try
	{
		A& new_a = dynamic_cast<A&>(p);
		std::cout << "\"A\"" << std::endl;
		tmp = new_a;
		return;
	}
	catch(const std::exception& e)
	{
		e.what();
	}
	try
	{
		B& new_b = dynamic_cast<B&>(p);
		std::cout << "\"B\"" << std::endl;
		tmp = new_b;
		return;
	}
	catch(const std::exception& e)
	{
		e.what();
	}
	try
	{
		C& new_c = dynamic_cast<C&>(p);
		std::cout << "\"C\"" << std::endl;
		tmp = new_c;
	}
	catch(const std::exception& e) 
	{
		e.what();
		std::cout << "Error: No match class" << std::endl;
	}
}

int	main()
{
	Base*	tmp = NULL;

	tmp = generate();
	std::cout << "identify(Base* p) output: ";
	identify(tmp);
	std::cout << "identify(Base& p) output: ";
	identify(*tmp);

	return 0;
}