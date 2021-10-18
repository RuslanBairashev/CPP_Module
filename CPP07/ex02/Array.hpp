#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cassert>
#include <cstdlib>

template <typename T>
class Array
{
private:
	T 			*_array;
	unsigned	_length;
public:
	Array(): _array(new T[0]), _length(0) {}
	Array(unsigned int n): _array(new T[n]), _length(n) {}
	/*{
		assert(n >= 0);
		_length = n;
		_array = new T[n];
		for(unsigned int i = 0; i < n; i++)
			_array[i] = 0;
	}*/
	~Array() { delete[] _array; }

	Array(const Array& c_name)
	{
		_array = new T[c_name._length];
		*_array = *c_name._array;
	}

	Array&	operator=(const Array& c_name)
	{
		if (this == &c_name)
			return *this;
		delete [] _array;
		_length = c_name._length;
		_array = new T[c_name._length];
		*_array = *c_name._array;
		return *this;
	}

	T&	operator[](unsigned int ind)
	{
		if(ind < 0 || ind > (_length - 1))
			throw OutOfRange();
		return _array[ind];
	}

	unsigned int	size() const { return _length; }

	class OutOfRange: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Array::OutOfRangeException";
			}
	};
};

#endif