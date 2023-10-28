#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define RED	"\033[31m"
# define ORANGE	"\033[38;5;208m"
# define YELLOW	"\033[33m"
# define GREEN	"\033[32m"
# define RESET	"\033[0m"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(void);
		~Harl(void);
		void	complain( std::string level );
};

#endif