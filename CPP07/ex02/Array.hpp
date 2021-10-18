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
	Array() { _array = new T[0]; _length = 0;/* T[0] = NULL;*/ }
	Array(unsigned int n)
	{
		//assert(n > 0);
		_length = n;
		_array = new T[n];
		//for(unsigned int = 0; i < n; i++)
		//	_array[i] = T;
	}
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
		_array = new T[c_name._length];
		*_array = *c_name._array;
		return *this;
	}

	int&	operator[](unsigned int ind)
	{
		//assert(ind >= 0 && ind < _length);
		return _array[ind];
	}

	unsigned int	size() const { return _length; }
};



#endif