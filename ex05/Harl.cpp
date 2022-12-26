#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Constructor called" << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Harl::complain(std::string level) {
	void (Harl::*funcs[4])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error,
	};

	switch (Format(level)) {
		case (DEBUG):
			(this->*funcs[0])();
			break;
		case (INFO):
			(this->*funcs[1])();
			break;
		case (WARNING):
			(this->*funcs[2])();
			break;
		case (ERROR):
			(this->*funcs[3])();
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
				 "ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
				 "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
				 "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
