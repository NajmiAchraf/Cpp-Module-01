#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {

public:

	std::string	const	&getType();
	void				setType(std::string type);
	void				setWeapon(Weapon &weapon);

	HumanB(std::string name);
	~HumanB();

	void	attack();

private:

	std::string	name;
	Weapon		*weapon;
};

#endif