#include <iostream>
#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Awesome aa(2), bb(4);
	::swap(aa, bb);
	std::cout << "aa = " << aa << ", b = " << bb << std::endl;
	std::cout << "min( aa, bb ) = " << ::max(aa, bb) << std::endl;
	std::cout << "max( aa, bb ) = " << ::min(aa, bb) << std::endl;

	return 0;
}