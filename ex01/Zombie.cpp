#include "Zombie.hpp"

Zombie::Zombie() : _name("unnamed") {
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}
