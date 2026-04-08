#include "Weapon.hpp"
#include "HumanA.hpp"
// #include "HumanB.hpp"
#include <iostream>

HumanA::HumanA ()
{
	this->_weapon = new Weapon();
}

HumanA::HumanA (std::string weapon, std::string name) : _name(name)
{
	this->_weapon = new Weapon(weapon);
}

HumanA::~HumanA ()
{
	delete _weapon;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}
