#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie *randomZombie;

	randomZombie = newZombie(name);
	randomZombie->announce();
	delete randomZombie;
}
