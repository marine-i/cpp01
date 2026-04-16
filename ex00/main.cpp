#include "Zombie.hpp"

int	main()
{
	Zombie a("Bob");
	a.announce();

	Zombie *b = newZombie("Jean");
	b->announce();
	delete b;

	randomChump("Jack");
	return (0);
}
