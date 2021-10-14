#include <iostream>
#include <string>
#include <cstring>

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
};

int	is_char(std::string str, t_list *out_vals)
{
	char	c;

	if (str.length() != 1)
		return 1;
	c = static_cast<char>(str[0]);
	if (!isprint(c) || isdigit(c))
		return 1;
	//if (isprint(c) && !isdigit(c))
	out_vals->char_out = c;
	out_vals->int_out = static_cast<int>(out_vals->char_out);
	out_vals->float_out = static_cast<float>(out_vals->int_out);
	
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
		is_int(input_str, &out_vals)

	std::cout << std::cout.precision() << std::endl;
	std::cout << "\'" << out_vals.char_out << "\'" << std::endl;
	std::cout << out_vals.int_out << std::endl;
	std::cout << out_vals.float_out << std::endl;
}