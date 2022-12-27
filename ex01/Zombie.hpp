#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {

public:

	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);


private:

	std::string	_name;

};

Zombie	*zombieHorde(int N, std::string name);

#endif
