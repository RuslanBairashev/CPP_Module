#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <limits>


int	print_err(std::string str)
{
	std::cout << str << std::endl;
	return 1;
}

struct t_list
{
	char		char_out;
	int			int_out;
	float		float_out;
	double		d_out;
	char		char_text[16];
	char		*int_text;
	char		*float_text;
	char		*d_text;
};

int	is_char(std::string str, t_list *out_vals)
{
	char	tmp;

	if (str.length() != 1)
		return 1;
	tmp = static_cast<char>(str[0]);
	if (isdigit(tmp))
		return 1;
	
	//if (isprint(c) && !isdigit(c))
	out_vals->char_out = tmp;
	out_vals->int_out = static_cast<int>(out_vals->char_out);
	out_vals->float_out = static_cast<float>(out_vals->int_out);
	out_vals->d_out = static_cast<double>(out_vals->float_out);

	
	
	return 0;
}

int	is_int(std::string str, t_list *out_vals)
{
	int i(0);

	for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!isdigit(*it) && ((*it != '-' && *it != '+') || i != 0))
			return 1;
		i++;
	}
	out_vals->int_out = std::atoi(str.c_str());
	out_vals->float_out = static_cast<float>(out_vals->int_out);
	out_vals->d_out = static_cast<double>(out_vals->float_out);
	if (out_vals->int_out < 32 || out_vals->int_out == 127)
		strncpy(out_vals->char_text, "Non displayable", 16);
	else if (out_vals->int_out > 127)
		strncpy(out_vals->char_text, "impossible", 16);
	else
		out_vals->char_out = static_cast<char>(out_vals->int_out);
	return 0;
}

int	is_float(std::string str, t_list *out_vals)
{
	int		i(0);
	bool	dot_flg(0);

	for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if ((it != str.end() - 1) && !isdigit(*it) && ((*it != '-' && *it != '+') || i != 0))
		{
			if(*it == '.' && !dot_flg)
				dot_flg = 1;
			else
				return 1;
		}
		if ((it == str.end() - 1) && (*it != 'f' && !isdigit(*it)) && (*it == '.' && dot_flg))
			return 1;
		i++;
	}
	//std::cout << "is_float\n";
	out_vals->d_out = std::atof(str.c_str());
	out_vals->float_out = static_cast<float>(out_vals->d_out);
	out_vals->int_out = static_cast<int>(out_vals->d_out);
	return 0;
}

int	main(int ac, char** av)
{
	std::string	input_str;
	t_list		out_vals;

	if (ac != 2)
		return print_err("Error: number of arguments must 2!");
	input_str = av[1];
	memset(&out_vals, 0, sizeof(out_vals));

	if(is_char(input_str, &out_vals))
		if(is_int(input_str, &out_vals))
			is_float(input_str, &out_vals);
	
	//std::cout << std::cout.precision() << std::endl;
	if (!out_vals.char_text[0])
		std::cout << "char: " << "\'" << out_vals.char_out << "\'" << std::endl;
	else
		std::cout << "char: " << out_vals.char_text << std::endl;
	std::cout << "int: " << out_vals.int_out << std::endl;
	std::cout << "float: " << out_vals.float_out << "f" << std::endl;
	std::cout << "double: " << out_vals.d_out << std::endl;
	std::cout << INT_MAX << "   " << INT_MIN << std::endl;
}