#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << RED << ERROR_ARGC << RESET << std::endl;
		return (1);
	}

	Harl harl;
	harl.complain(argv[1]);

	return (0);
}