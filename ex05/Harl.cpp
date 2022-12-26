#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Constructor called" << std::endl;
	ft_ptr[0] = &Harl::debug;
	ft_ptr[1] = &Harl::info;
	ft_ptr[2] = &Harl::warning;
	ft_ptr[3] = &Harl::error;
}

Harl::~Harl(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Harl::complain(std::string level) {
	switch (Format(level)) {
		case (DEBUG):
			(this->*ft_ptr[0])();
			break;
		case (INFO):
			(this->*ft_ptr[1])();
			break;
		case (WARNING):
			(this->*ft_ptr[2])();
			break;
		case (ERROR):
			(this->*ft_ptr[3])();
			break;
		default:
			std::cout << "Invalid level" << std::endl;
	}
}

levelFormat	Harl::Format(std::string level) {
	if (level == "DEBUG")
		return (DEBUG);
	else if (level == "INFO")
		return (INFO);
	else if (level == "WARNING")
		return (WARNING);
	else if (level == "ERROR")
		return (ERROR);
	return (EXTRA);
}

void	Harl::debug(void) {
	std::cerr << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
				 "ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void) {
	std::cerr << "I cannot believe adding extra bacon costs more money.\nYou didn't put "
				 "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cerr << "I think I deserve to have some extra bacon for free.\nI’ve been coming for "
				 "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
