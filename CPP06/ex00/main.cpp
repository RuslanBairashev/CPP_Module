#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>


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
	char	tmp;

	if (str.length() != 1)
		return 1;
	tmp = static_cast<char>(str[0]);
	if (!isprint(tmp) || isdigit(tmp))
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
	int i = 0;

	for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!isdigit(*it) && (*it != '-' || i != 0))
			return 1;
		i++;
	}
	out_vals->int_out = std::atoi(str.c_str());
	out_vals->float_out = static_cast<float>(out_vals->int_out);
	out_vals->d_out = static_cast<double>(out_vals->float_out);
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
		is_int(input_str, &out_vals);

	std::cout << std::cout.precision() << std::endl;
	std::cout << "\'" << out_vals.char_out << "\'" << std::endl;
	std::cout << out_vals.int_out << std::endl;
	std::cout << out_vals.float_out << std::endl;
	std::cout << out_vals.d_out << std::endl;

	float test_f;
	test_f = 45.43f;
	std::cout << test_f << std::endl;
}