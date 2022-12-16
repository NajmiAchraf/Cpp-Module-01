#include "Zombie.hpp"

void	stackChump(std::string name) {
	Zombie	stackZombie(name);
	std::cout << "Stack Zombie created" << std::endl;
	stackZombie.announce();
}

void	heapChump(std::string name) {
	Zombie	*heapZombie = newZombie(name);
	std::cout << "Heap Zombie created" << std::endl;
	heapZombie->announce();
	delete heapZombie;
}

void	randomChump(std::string name) {
	stackChump(name);
	heapChump(name);
}
