#include "Weapon.hpp"
#include "HumanA.hpp"

#include <iostream>

int	main()
{
	Weapon club = Weapon("crude spiked club");
	// Weapon club = Weapon("testtt");
	// std::cout << club.getType() << std::endl;
	HumanA bob(club.getType(), "bob");
	bob.attack();
	club.setType("autre arme");
	bob.attack();

}
