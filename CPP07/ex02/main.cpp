#include <iostream>
#include "Array.hpp"

class Tclass
{
private:
	int	_value;
public:
	int	getValue() { return _value; }
};

#define MAX_VAL 750

int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << "numbers size func test: " << numbers.size() << std::endl;
    delete [] mirror;//

	Array<float> empty;
	std::cout << "empty size func test: " << empty.size() << std::endl;
	std::cout << "empty index access test: " << empty[0] << std::endl;
	Array<int> test(15);
	std::cout << "test size func test: " << test.size() << std::endl;
	std::cout << "test index access test: " << test[10] << std::endl;
	test[10] = 500;
	std::cout << "test index access test: " << test[10] << std::endl;
	Array<Tclass> test_cl(8);
	std::cout << "test_cl size func test: " << test_cl.size() << std::endl;

    return 0;
}
