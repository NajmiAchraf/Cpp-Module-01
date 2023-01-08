#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	std::string const	&getType(void);
	void				setType(std::string type);

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

private:

	std::string type;

};

#endif