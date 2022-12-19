#include "HumanA.hpp"
#include "HumanB.hpp"

void	human_a() {
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void	human_b() {
	Weapon	club = Weapon("crude spiked club");
	HumanB	jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int main() {
	human_a();
	human_b();
//	system("leaks Unnecessary_violence");
	return 0;
}