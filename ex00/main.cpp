#include "Zombie.hpp"

int main(void)
{
	Zombie a("Bob");
	a.announce();

	Zombie *b = newZombie("Jean");
	b->announce();
	delete b;

	randomChump("Jack");
	return (0);
}