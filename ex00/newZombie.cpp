#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *b = new Zombie(name);
	return (b);
}
