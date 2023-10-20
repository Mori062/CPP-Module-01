#include "Zombie.hpp"
int main(void)
{
	Zombie	*zombie = newZombie("John");
	zombie->announce();
	randomChump("Kevin");
	randomChump(zombie->getName());
	delete zombie;

	// system("leaks -q megaphone");
	return (0);
}
