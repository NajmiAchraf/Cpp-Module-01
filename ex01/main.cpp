#include "Zombie.hpp"

void run() {
	int		N = 10;
	Zombie	*horde = zombieHorde(N, "Horde");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete [] horde;
}

int main(void) {
	run();
//	system("leaks Moar_brainz!");
	return (0);
}
