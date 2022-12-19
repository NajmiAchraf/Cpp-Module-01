
#include "HumanB.hpp"

std::string const	&HumanB::getType() {
	return (this->weapon->getType());
}

void	HumanB::setType(std::string type) {
	this->weapon->setType(type);
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) {
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {
	std::cout << "Destructor called" << std::endl;
}

void	HumanB::attack() {
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}
