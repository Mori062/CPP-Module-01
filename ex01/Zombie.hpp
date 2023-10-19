#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

# define CYAN		"\033[36m"
# define YELLOW		"\033[33m"
# define GREEN		"\033[32m"
# define RED		"\033[31m"
# define RESET		"\033[0m"

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();

	public:
		void		announce( void ) const;
		std::string	getName( void ) const;
		void		setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif