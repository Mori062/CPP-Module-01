#include "../includes/sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << RED << ERROR_ARGC << RESET << std::endl;
		return 1;
	}
	if (argv[2][0] == '\0') {
		std::cerr << RED << ERROR_BEFORE_STRING << RESET << std::endl;
		return 1;
	}
	Sed sed(argv[1], argv[2], argv[3]);
	return sed.replace();
}