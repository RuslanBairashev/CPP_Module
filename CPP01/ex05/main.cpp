#include "Karen.hpp"

int	main()
{
	Karen	my_girl;

	my_girl.initialize();
	my_girl.complain("DEBUG");
	my_girl.complain("INFO");
	my_girl.complain("WARNING");
	my_girl.complain("ERROR");
	return (0);
}