#include "Zombie.hpp"

void run() {
	Zombie	*horde = zombieHorde(N, "Horde");
	int		N = 10;

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
