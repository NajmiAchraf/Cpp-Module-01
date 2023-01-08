#include "Weapon.hpp"

std::string const	&Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::Weapon(void) : type("none") {
	std::cout << "Constructor called" << std::endl;
}

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Constructor called" << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Destructor called" << std::endl;
}
