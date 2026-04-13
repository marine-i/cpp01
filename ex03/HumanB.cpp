#include "Weapon.hpp"
#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB (std::string name) : _name(name), _weapon(NULL)
{
	
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name;
	if (this->_weapon)
		std::cout << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << " has no weapon " << std::endl;
}