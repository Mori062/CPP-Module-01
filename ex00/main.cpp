#include "Zombie.hpp"
int main(void)
{
	Zombie	*zombie;

	zombie = newZombie("John");
	randomChump("Jack");
	randomChump(zombie->getName());
	delete zombie;
	return (0);
}