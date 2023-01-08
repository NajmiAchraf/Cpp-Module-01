#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {

public:

	std::string const	&getWeaponType(void);

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);

private:

	std::string	name;
	Weapon		&weapon;

};

#endif
