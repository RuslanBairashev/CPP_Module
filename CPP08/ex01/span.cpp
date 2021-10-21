#include "span.hpp"

class OutOfRange: public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Span::OutOfRangeException";
		}
};

class VectorToSmall: public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Span::VectorToSmall";
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

Span::~Span() {}

Span::Span(const Span& c_name) { *this = c_name; }

Span&	Span::operator=(const Span& c_name)
{
	if (this == &c_name)
		return *this;
	*this = c_name;
	return *this;
}

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

void	Span::addAll(Span & Span_copy)
{
	if (actN_ + Span_copy.array_.size() > maxN_)
		throw OutOfRange();
	actN_ += Span_copy.array_.size();
	copy(Span_copy.array_.begin(),Span_copy.array_.end(),back_inserter(array_));
}

int		Span::getNumber(unsigned int ind) const { return array_[ind]; }
unsigned int		Span::getActN() const { return actN_; }

int		Span::longestSpan() const
{
	if (array_.size() < 2)
		throw VectorToSmall();
	std::vector<int>::const_iterator	max_res;
	max_res = std::max_element(array_.begin(), array_.end());

	std::vector<int>::const_iterator	min_res;
	min_res = std::min_element(array_.begin(), array_.end());
	return *max_res - *min_res;
}

int		Span::shortestSpan() const
{
	int									span(0);
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	inner_it;

	if (array_.size() < 2)
		throw VectorToSmall();
	span = std::abs(array_[0] - array_[1]);
	it = array_.begin();
	while (it < array_.end())
	{
		inner_it = it + 1;
		while (inner_it < array_.end())
		{
			if (std::abs(*it - *inner_it) < span)
				span = std::abs(*it - *inner_it);
			inner_it++;
		}
		it++;
	}
	return span;
}
