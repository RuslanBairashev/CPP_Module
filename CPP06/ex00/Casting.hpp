#ifndef CASTING_HPP
#define CASTING_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <limits.h>
#include <iomanip>

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
	char		float_text_[16];
	char		d_text_[16];
public:
	Casting(std::string str);
	~Casting();
	Casting(const Casting& c_name);
	Casting&	operator=(const Casting& c_name);

	int		is_char();
	int		is_int();
	int		is_float();
	int		is_naninf();
	void	is_impossible();
	void	print_res();
};



#endif