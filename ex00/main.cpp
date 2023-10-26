#include "Zombie.hpp"
int main(void)
{
	Zombie	*zombie = newZombie("John");
	zombie->announce();
	randomChump("Kevin");
	randomChump(zombie->getName());
	delete zombie;

	return (0);
}

// __attribute__((destructor)) void end(void)
// {
// 	system("leaks -q megaphone");
// }