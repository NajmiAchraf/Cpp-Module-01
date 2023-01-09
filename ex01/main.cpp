#include "Zombie.hpp"

static void run() {
	int		N = 20;
	Zombie	*horde = zombieHorde(N, "Horde");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete [] horde;
}

int main(void) {
	run();
	return (0);
}
