
#include "HumanA.hpp"

std::string const	&HumanA::getWeaponType() {
	return (this->weapon.getType());
}

HumanA::HumanA(std::string name, Weapon &weapon_set) : name(name), weapon(weapon_set) {
	std::cout << "Constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Destructor called" << std::endl;
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->getWeaponType() << std::endl;
}
