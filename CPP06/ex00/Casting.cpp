#include "Casting.hpp"

Casting::Casting(std::string str)
{
	memset(char_text_, 0, 16);
	memset(int_text_, 0, 16);
	str_ = new std::string(str);
}

Casting::~Casting()
{
	delete str_;
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
	int		i(0);
	long	pre_int;

	for ( std::string::iterator it=(*(this->str_)).begin(); it!=(*(this->str_)).end(); ++it)
	{
		if (!isdigit(*it) && ((*it != '-' && *it != '+') || i != 0))
			return 1;
		i++;
	}
	pre_int = std::atoi((*(this->str_)).c_str());
	if (pre_int > INT_MAX || pre_int < INT_MIN)
		std::strncpy(this->int_text_, "impossible", 16);
	else
		this->int_out_ = static_cast<int>(pre_int);
	this->float_out_ = static_cast<float>(this->int_out_);
	this->d_out_ = static_cast<double>(this->float_out_);
	if (this->int_out_ < 32 || this->int_out_ == 127)
		std::strncpy(this->char_text_, "Non displayable", 16);
	else if (this->int_out_ > 127)
		std::strncpy(this->char_text_, "impossible", 16);
	else
		this->char_out_ = static_cast<char>(this->int_out_);
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
	this->int_out_ = static_cast<int>(this->d_out_);
	if (this->int_out_ < 32 || this->int_out_ == 127)
		std::strncpy(this->char_text_, "Non displayable", 16);
	else if (this->int_out_ > 127)
		std::strncpy(this->char_text_, "impossible", 16);
	else
		this->char_out_ = static_cast<char>(this->int_out_);
	return 0;
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
	std::cout << "float: " << this->float_out_ << "f" << std::endl;
	std::cout << "double: " << this->d_out_ << std::endl;
}