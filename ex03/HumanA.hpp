#include "Weapon.hpp"
// #include "HumanB.hpp"

class	HumanA
{
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanA();
		HumanA(std::string weapon, std::string name);
		~HumanA();
		void	attack();

};
