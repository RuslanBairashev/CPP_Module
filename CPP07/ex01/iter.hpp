#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <ostream>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template < typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template < typename T >
void	iter(T *ptr, unsigned len, void (*foo)(T const &))
{
	if (!ptr)
		return;
	for(unsigned i = 0; i < len; i++)
		foo(ptr[i]);
	std::cout << std::endl;
}
#endif