#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << GREEN << this->_name << " is born" << RESET << std::endl;
}

Zombie::Zombie()
{
	this->_name = "default";
	std::cout << GREEN << this->_name << " is born" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << this->_name << " is dead" << RESET << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << CYAN << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

std::string	Zombie::getName( void ) const
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}