#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

class Span
{
private:
	std::vector<int>	array_;
	unsigned int		maxN_;
	unsigned int		actN_;
public:
	Span(unsigned int N);
	Span(std::vector<int> & arr);
	Span(const Span& c_name);
	Span&	operator=(const Span& c_name);
	~Span();

	int&			operator[](unsigned int ind);
	void			addNumber(int num);
	void			addAll(Span & Span_copy);
	void			addIter(std::vector<int>::iterator	ibegin, \
	std::vector<int>::iterator	iend);
	int				getNumber(unsigned int ind) const;
	unsigned int	getActN() const;
	int				shortestSpan() const;
	int				longestSpan() const;
};

#endif