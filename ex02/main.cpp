#include <iomanip>
#include <iostream>

int main(void)
{
	std::string name;
	std::string *namePTR;

	name				 = "HI THIS IS BRAIN";
	namePTR				 = &name;
	std::string &nameREF = name;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::setw(20) << "name address: " << &name << std::endl;
	std::cout << std::setw(20) << "namePTR address: " << namePTR << std::endl;
	std::cout << std::setw(20) << "nameREF address: " << &nameREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::setw(20) << "name name: " << name << std::endl;
	std::cout << std::setw(20) << "namePTR name: " << *namePTR << std::endl;
	std::cout << std::setw(20) << "nameREF name: " << nameREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	nameREF = "HELLO WORLD";
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::setw(20) << "name address: " << &name << std::endl;
	std::cout << std::setw(20) << "namePTR address: " << namePTR << std::endl;
	std::cout << std::setw(20) << "nameREF address: " << &nameREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::setw(20) << "name name: " << name << std::endl;
	std::cout << std::setw(20) << "namePTR name: " << *namePTR << std::endl;
	std::cout << std::setw(20) << "nameREF name: " << nameREF << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}