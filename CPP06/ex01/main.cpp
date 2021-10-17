#include <iostream>
#include <stdint.h>

struct Data
{
	int	num;
};

uintptr_t	serialize(Data* ptr)
{
	//void	*tmp;
	//tmp = reinterpret_cast<void*>(ptr);
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	Data*		tmp = NULL;

	tmp = reinterpret_cast<Data*>(raw);

	return tmp;
}

int	main()
{
	Data		some;
	Data*		ptr;
	uintptr_t	raw;
	Data*		two;

	ptr = &some;
	std::cout << "ptr: " << ptr << std::endl;
	raw = serialize(ptr);
	std::cout << std::hex << "raw: 0x" << raw;
	std::cout << std::dec << " (" << raw << ")" << std::endl;

	two = deserialize(raw);
	std::cout << "two: " << two << std::endl;

	two->num = 42;
	std::cout << "Data test: " << two->num << " is " << two->num / 2 << std::endl;

	return 0;
}