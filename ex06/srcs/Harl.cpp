#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	;
	// std::cout << "Harl constructed!" << std::endl;
}

Harl::~Harl(void)
{
	;
	// std::cout << "Harl destructed!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger."
			  << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << YELLOW << "[INFO]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
			  << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I "
				 "wouldn't be asking for more!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << ORANGE << "[WARNING]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
			  << std::endl;
	std::cout << "I've been coming for years whereas you started working here "
				 "since last month."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "[ERROR]" << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(std::string level)
{
	const size_t size = 4;
	size_t i;
	std::string levels[size]		= {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[size])() = {&Harl::debug, &Harl::info,
									   &Harl::warning, &Harl::error};

	for (i = 0; i < size; i++) {
		if (level == levels[i])
			break;
	}
	switch (i) {
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << RED
					  << "[ Probably complaining about insignificant problems ]"
					  << RESET << std::endl;
	}
}
