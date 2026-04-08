#include "Weapon.hpp"
#include "HumanA.hpp"

#include <iostream>

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	// Weapon club = Weapon("testtt");
	// std::cout << club.getType() << std::endl;
	HumanA bob("bob", club);
	bob.attack();
	club.setType("autre arme");
	bob.attack();

}
