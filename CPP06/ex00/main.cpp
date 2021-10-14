#include <iostream>
#include <string>

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

int	is_char(std::string str)
{
	if (std::strlen(str) == 1)
	return 0;
}

int	main(int ac, char** av)
{
	std::string	input_str;
	t_list		out_vals;

	if (ac != 2)
		return print_err("Error: number of arguments must 2!");
	input_str = av[1];

	is_char(input_str);
	/*
	std::cout << input_str << std::endl;
	char_out = static_cast<char>(input_str[0]);
	std::cout << char_out << std::endl;
	int_out = static_cast<int>(char_out);
	std::cout << int_out << std::endl;
	float_out = static_cast<float>(int_out);
	std::cout << float_out << std::endl;
	/*
}