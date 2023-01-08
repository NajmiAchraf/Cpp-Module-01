#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {

public:

	std::string const	&getType(void);
	void				setType(std::string type);
	void				setWeapon(Weapon &weapon);

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);

private:

	std::string	name;
	Weapon		*weapon;
};

#endif