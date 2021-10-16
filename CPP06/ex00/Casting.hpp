#ifndef CASTING_HPP
#define CASTING_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <limits.h>

class Casting
{
private:
	std::string	*str_;
	char		char_out_;
	int			int_out_;
	float		float_out_;
	double		d_out_;
	char		char_text_[16];
	char		int_text_[16];
	//char		*float_text_;
	//char		*d_text_;
public:
	Casting(std::string str);
	~Casting();

	int		is_char();
	int		is_int();
	int		is_float();
	void	print_res();
};



#endif