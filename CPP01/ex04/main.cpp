#include <iostream>
#include <fstream>
#include <streambuf>
#include <string>

int	error_mesag(std::string err, std::string path)
{
	std::cout << err << path << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream	ifs;
		ifs.open(av[1], std::ifstream::in);
		if (!ifs.is_open())
			return (error_mesag("Error: Make sure file exists and check \
permissions! Can't open ", av[1]));

		std::string		s1;
		std::string		s2;
		s1 = av[2];
		s2 = av[3];
		if (s1.empty() || s2.empty() )
			return (error_mesag("Error: no empty lines allowed!", ""));
		
		std::string		str;
		std::string		str_new;
		ifs.seekg(0, std::ios::end);
		str.reserve(ifs.tellg());
		ifs.seekg(0, std::ios::beg);
		str.assign((std::istreambuf_iterator<char>(ifs)),
			std::istreambuf_iterator<char>());
		int	str_len = str.length();
		if (!str_len)
			return (error_mesag("Error: input file is empty!", ""));
		size_t	curr_pos;
		for(int start = 0; start < str_len;)
		{
			curr_pos = str.find(s1, start);
			if (curr_pos != std::string::npos)
			{
				str_new.append(str,start,(curr_pos - start));
				str_new.append(s2);
				start = curr_pos + s1.length();
			}
			else
			{
				str_new.append(str,start,str_len);
				break ;
			}
		}
		std::ofstream	ofs("test.txt");
		if (!ofs.is_open())
			return (error_mesag("Error: Can't open \"test.txt\"! Make sure \
file exists and check permissions!", ""));
		ofs << str_new;
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "Error: Wrong number of arguments! Must be 4. Quiting." \
		<< std::endl;
	return (0);
}
