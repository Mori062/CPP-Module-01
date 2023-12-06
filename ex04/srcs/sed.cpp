#include "../includes/sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2)
{
	_filename = filename;
	_before_string = s1;
	_after_string = s2;
}

Sed::~Sed(void)
{
	return ;
}

void	Sed::replace(void)
{
	std::ifstream	ifs(_filename);
	std::string		line;
	std::string		new_filename;
	size_t			pos;

	if (ifs.fail())
	{
		std::cerr << RED << ERROR_OPEN_FILE << RESET << std::endl;
		return ;
	}
	new_filename = _filename + ".replace";
	std::ofstream	ofs(new_filename.c_str());
	while (std::getline(ifs, line))
	{
		pos = 0;
		while (1)
		{
			pos = line.find(_before_string, pos);
			if (pos == std::string::npos)
				break ;
			line.replace(pos, _before_string.length(), _after_string);
			pos += _after_string.length();
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return ;
}