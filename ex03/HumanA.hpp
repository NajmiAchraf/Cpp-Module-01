#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {

public:

	std::string	const	&getWeaponType();

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack();

private:

	std::string	name;
	Weapon		&weapon;

};

#endif
