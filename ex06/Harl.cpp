#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void	Harl::complain( std::string level )
{
	int	i;

	i = 0;
	if (level == "DEBUG")
		i = 0;
	else if (level == "INFO")
		i = 1;
	else if (level == "WARNING")
		i = 2;
	else if (level == "ERROR")
		i = 3;
	else
		i = -1;
	switch (i)
	{
		case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				Harl::debug();
		case 1:
				std::cout << "[ INFO ]" << std::endl;
				Harl::info();
		case 2:
				std::cout << "[ WARNING ]" << std::endl;
				Harl::warning();
		case 3:
				std::cout << "[ ERROR ]" << std::endl;
				Harl::error();
				break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
