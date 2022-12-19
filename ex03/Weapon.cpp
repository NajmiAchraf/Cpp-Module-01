#include "Weapon.hpp"

std::string const	&Weapon::getType() {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::Weapon() : type("none") {
	std::cout << "Constructor called" << std::endl;
}

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Destructor called" << std::endl;
}