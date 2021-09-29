#include "Animals.hpp"

int	main()
{
	/*
	Animal test;
	*/
	std::cout << std::endl << "Создание классов:" << std::endl;
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();
	const Animal	*animals[] = { i, j };

	std::cout << std::endl << "Удаление классов:" << std::endl;
	int	arr_size = sizeof(animals) / sizeof(animals[0]);
	for(int iii = 0; iii < arr_size; iii++)
		delete animals[iii];

	std::cout << std::endl << "Проверка глубокого копирования присвоение Dog:" << std::endl;
	Dog basic;
	std::cout << "______________" << std::endl;
	{
		Dog tmp = basic;
	}
	std::cout << std::endl << "Проверка глубокого копирования копирование Cat:" << std::endl;
	Cat	dazy;
	std::cout << "______________" << std::endl;
	Cat	lazy;
	std::cout << "______________" << std::endl;
	{
		lazy = dazy;
	}
	std::cout << std::endl << "Удаление классов:" << std::endl;
	return 0;
}