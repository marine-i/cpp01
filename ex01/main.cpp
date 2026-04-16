#include "Zombie.hpp"

int main()
{
	int	n;

	n = 4;
	Zombie *z = zombieHorde(n, "Bob");
	if (z == NULL)
	{
		std::cout << "Horde not created" << std::endl;
		return (0);
	}
	for (int i = 0; i < n; i++)
	{
		z[i].announce();
	}
	delete[] z;
	return (0);
}