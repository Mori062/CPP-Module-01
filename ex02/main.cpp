#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	string;
	std::string	*stringPTR;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::string	&stringREF = string;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::setw(20) << "string address: " << &string << std::endl;
	std::cout << std::setw(20) << "stringPTR address: " << stringPTR << std::endl;
	std::cout << std::setw(20) << "stringREF address: " << &stringREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "stringPTR string: " << *stringPTR << std::endl;
	std::cout << "stringREF string: " << stringREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}