#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{


}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
	int	i = 0;
	std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4) 
    {
		if (level.compare(command[i]) == 0)
			break;
		i++;
	}
	if (i < 4) 
    {
		typedef void (Harl::*ptr_tf)(void);
		ptr_tf funciones[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		(this->*funciones[i])();
	}
}
