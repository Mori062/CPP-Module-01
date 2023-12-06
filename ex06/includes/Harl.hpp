#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define RED "\033[31m"
# define ORANGE "\033[38;5;208m"
# define YELLOW "\033[33m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

# define ERROR_ARGC "usage: ./Harl-filter <level>"

enum e_level
{
	UNKWOWN,
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		typedef void (Harl::* harl_func_t) (void);
		void		executeDebug(void);
		void		executeInfo(void);
		void		executeWarning(void);
		void		executeError(void);
	public:
		Harl(void);
		~Harl(void);
		void	complain( std::string level );
};

#endif