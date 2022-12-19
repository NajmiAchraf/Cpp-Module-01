#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	std::string const	&getType();
	void				setType(std::string type);

	Weapon();
	Weapon(std::string type);
	~Weapon();

private:

	std::string type;

};

#endif