#include "HumanA.hpp"
#include "HumanB.hpp"

static void	human_a(void) {
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

static void	human_b(void) {
	Weapon	club = Weapon("crude spiked club");
	HumanB	jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int main(void) {
	human_a();
	human_b();
//	system("leaks Unnecessary_violence");
	return (0);
}