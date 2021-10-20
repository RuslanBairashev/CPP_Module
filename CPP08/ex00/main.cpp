#include "easyfind.hpp"

#define N1 3
#define N2 10

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
		std::cout << "vect: " << vect[count] << ' ';
		std::cout << "deq: " << deq[count] << std::endl;
	}

	try
	{
		std::cout << easyfind(vect, N1) << " matches " << N1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << easyfind(deq, N2) << " matches " << N2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
	return 0;
}