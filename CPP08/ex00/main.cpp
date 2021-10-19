#include "easyfind.hpp"

int	main()
{
	std::vector<int>	vect;
	std::deque<int>		deq;

	for(int count = 0; count < 5; ++count)
	{
		vect.push_back(1 + count);
		deq.push_back(1 * count);
	}

	for(int count = 0; count < 5; ++count)
	{
		std::cout << "vect: " << vect[count] << ' ' << "deq: " << deq[count] << std::endl;
	}

	easyfind(vect, 10);
	easyfind(deq, 2);
	return 0;
}