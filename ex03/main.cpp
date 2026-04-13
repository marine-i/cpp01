#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#include <iostream>

// int	main(void)
// {
// 	Weapon club = Weapon("crude spiked club");
// 	// Weapon club = Weapon("testtt");
// 	// std::cout << club.getType() << std::endl;
// 	HumanA bob("bob", club);
// 	bob.attack();
// 	club.setType("autre arme");
// 	bob.attack();
// 	HumanB Bill("Bill");
// 	Bill.setWeapon(club);
// 	club.setType("autre autre arme");
// 	Bill.attack();

// }
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
