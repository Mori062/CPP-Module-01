#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl constructed!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructed!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "[INFO]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << ORANGE << "[WARNING]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ERROR]" << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level == "debug")
		this->debug();
	else if (level == "info")
		this->info();
	else if (level == "warning")
		this->warning();
	else if (level == "error")
		this->error();
	else
		std::cerr << RED << "Invalid level" << RESET << std::endl;
}