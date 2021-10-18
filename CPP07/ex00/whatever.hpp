#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <ostream>

template < typename T >

void		swap(T & x, T & y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template < typename T >

T const &  min(T const & x, T const & y)
{
	return ( (x<y) ? x : y);
}

template < typename T >

T const &  max(T const & x, T const & y)
{
	return ( x>y ? x : y);
}

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

#endif