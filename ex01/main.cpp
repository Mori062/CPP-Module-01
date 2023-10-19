#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies = zombieHorde(10, "John");

	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
	system("leaks -q horde");
	return (0);
}