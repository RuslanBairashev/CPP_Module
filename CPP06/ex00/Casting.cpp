#include "Casting.hpp"

Casting::Casting(std::string str)
{
	memset(char_text_, 0, 16);
	memset(int_text_, 0, 16);
	memset(float_text_, 0, 16);
	memset(d_text_, 0, 16);
	str_ = new std::string(str);
}

Casting::~Casting()
{
	delete str_;
}

Casting::Casting(const Casting& c_name)
{
	if (c_name.str_)
	{
		str_ = new std::string((*(c_name.str_)));
		*str_ = *c_name.str_;
	}
	else
		str_ = NULL;
}

Casting&	Casting::operator=(const Casting& c_name)
{
	if (this == &c_name)
		return *this;
	delete str_;
	if (c_name.str_)
	{
		str_ = new std::string((*(c_name.str_)));
		*str_ = *c_name.str_;
	}
	else
		str_ = NULL;
	return *this;
}

int	Casting::is_char()
{
	char	tmp;

	if ((this->str_)->length() != 1)
		return 1;
	tmp = static_cast<char>((*(this->str_))[0]);
	if (isdigit(tmp))
		return 1;
	this->char_out_ = tmp;
	this->int_out_ = static_cast<int>(this->char_out_);
	this->float_out_ = static_cast<float>(this->int_out_);
	this->d_out_ = static_cast<double>(this->float_out_);

	return 0;
}

int	Casting::is_int()
{
	int			i(0);
	long long	pre_int;

	for ( std::string::iterator it=(*(this->str_)).begin(); it!=(*(this->str_)).end(); ++it)
	{
		if (!isdigit(*it) && ((*it != '-' && *it != '+') || i != 0))
			return 1;
		i++;
	}
	pre_int = std::atol((*(this->str_)).c_str());
	if (pre_int > 2147483647 || pre_int < INT_MIN)
	{
		std::strncpy(this->int_text_, "impossible", 16);
		std::strncpy(this->char_text_, "impossible", 16);
		std::strncpy(this->float_text_, "impossible", 16);
		std::strncpy(this->d_text_, "impossible", 16);
	}
	else
	{
		this->int_out_ = static_cast<int>(pre_int);
		this->float_out_ = static_cast<float>(this->int_out_);
		this->d_out_ = static_cast<double>(this->float_out_);
		if (this->int_out_ < 32 || this->int_out_ == 127)
			std::strncpy(this->char_text_, "Non displayable", 16);
		else if (this->int_out_ > 127)
			std::strncpy(this->char_text_, "impossible", 16);
		else
			this->char_out_ = static_cast<char>(this->int_out_);
	}
	return 0;
}

int		Casting::is_float()
{
	int		i(0);
	bool	dot_flg(0);

	for ( std::string::iterator it=(*(this->str_)).begin(); it!=(*(this->str_)).end(); ++it)
	{
		if ((it != (*(this->str_)).end() - 1) && !isdigit(*it) && ((*it != '-' && *it != '+') || i != 0))
		{
			if(*it == '.' && !dot_flg)
				dot_flg = 1;
			else
				return 1;
		}
		if ((it == (*(this->str_)).end() - 1) && (*it != 'f' && !isdigit(*it)) && (*it == '.' && dot_flg))
			return 1;
		i++;
	}
	this->d_out_ = std::atof((*(this->str_)).c_str());
	this->float_out_ = static_cast<float>(this->d_out_);
	if (this->d_out_ > static_cast<double>(INT_MAX) || this->d_out_ < static_cast<double>(INT_MIN))
		std::strncpy(this->int_text_, "impossible", 16);
	else
		this->int_out_ = static_cast<int>(this->d_out_);
	if (this->int_out_ < 32 || this->int_out_ == 127)
		std::strncpy(this->char_text_, "Non displayable", 16);
	else if (this->int_out_ > 127)
		std::strncpy(this->char_text_, "impossible", 16);
	else
		this->char_out_ = static_cast<char>(this->int_out_);
	return 0;
}

int		Casting::is_naninf()
{
	std::string	arrf[] = {"-inff","+inff","inff","nanf", "stop"};
	std::string	arr[] = {"-inf","+inf","inf","nan", "stop"};

	for(int i = 0; arrf[i] != "stop"; i++)
	{
		if (arrf[i] == (*(this->str_)))
			{
				std::strncpy(this->float_text_, arrf[i].c_str(), 16);
				std::strncpy(this->int_text_, "impossible", 16);
				std::strncpy(this->char_text_, "impossible", 16);
				std::strncpy(this->d_text_, arr[i].c_str(), 16);
				return 0;
			}
	}
	for(int i = 0; arr[i] != "stop"; i++)
	{
		if (arr[i] == (*(this->str_)))
			{
				std::strncpy(this->d_text_, arr[i].c_str(), 16);
				std::strncpy(this->int_text_, "impossible", 16);
				std::strncpy(this->char_text_, "impossible", 16);
				std::strncpy(this->float_text_, arrf[i].c_str(), 16);
				return 0;
			}
	}

	return 1;
}

void	Casting::is_impossible()
{
	std::strncpy(this->int_text_, "impossible", 16);
	std::strncpy(this->char_text_, "impossible", 16);
	std::strncpy(this->float_text_, "impossible", 16);
	std::strncpy(this->d_text_, "impossible", 16);
}

void	Casting::print_res()
{
	if (!this->char_text_[0])
		std::cout << "char: " << "\'" << this->char_out_ << "\'" << std::endl;
	else
		std::cout << "char: " << this->char_text_ << std::endl;
	if (!this->int_text_[0])
		std::cout << "int: " << this->int_out_  << std::endl;
	else
		std::cout << "int: " << this->int_text_ << std::endl;
	std::cout << std::fixed;
	if (!this->d_text_[0] && ((this->d_out_ - static_cast<double>(this->int_out_)) < 0.000001))
		std::cout << std::setprecision(1);
	if (!this->float_text_[0])
		std::cout << "float: " << this->float_out_ << "f" << std::endl;
	else
		std::cout << "float: " << this->float_text_ << std::endl;
	if (!this->d_text_[0])
		std::cout << "double: " << this->d_out_ << std::endl;
	else
		std::cout << "double: " << this->d_text_ << std::endl;
}