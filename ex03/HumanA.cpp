
#include "HumanA.hpp"

std::string const	&HumanA::getWeaponType(void) {
	return (this->weapon.getType());
}

HumanA::HumanA(std::string name, Weapon &weapon_set) : name(name), weapon(weapon_set) {
	std::cout << "Constructor called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "Destructor called" << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with his " << this->getWeaponType() << std::endl;
}
