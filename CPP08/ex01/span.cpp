#include "span.hpp"

class OutOfRange: public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Array::OutOfRangeException";
		}
};

Span::Span(unsigned int N): maxN_(N), actN_(0)
{
	//memset(&array_, 0, array_.size());
	//this->array_.resize(N);
}

Span::Span(std::vector<int> & arr_copy)
{
	maxN_ = arr_copy.size();
	actN_ = arr_copy.size();
	array_.reserve(arr_copy.size());
	copy(arr_copy.begin(),arr_copy.end(),back_inserter(array_));
}

Span::~Span()
{
}
/*
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
*/
int&	Span::operator[](unsigned int ind)
{
	if(ind < 0 || ind > (maxN_ - 1))
		throw OutOfRange();
	return array_[ind];
}

void	Span::addNumber(int num)
{
	if (actN_ >= maxN_)
		throw OutOfRange();
	//array_[actN_] = num;
	this->array_.push_back(num);
	actN_++;
}

int		Span::getNumber(unsigned int ind) const { return array_[ind]; }
unsigned int		Span::getActN() const { return actN_; }

int		Span::longestSpan() const
{
	std::vector<int>::const_iterator	max_res;
	max_res = std::max_element(array_.begin(), array_.end());

	std::vector<int>::const_iterator	min_res;
	min_res = std::min_element(array_.begin(), array_.end());
	return *max_res - *min_res;
}

int		Span::shortestSpan() const
{
	int									span(0);
	int									b;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	inner_it;

	if (array_.size() < 2)
		throw OutOfRange();
	span = std::max(array_[0], array_[1]) - std::min(array_[0], array_[1]);
	it = array_.begin();
	while (it < array_.end())
	{
		inner_it = it + 1;
		while (inner_it < array_.end())
		{
			b = abs(*it - *inner_it);
			if (b < span)
				span = b;
			inner_it++;
		}
		it++;
	}
	return span;
}
