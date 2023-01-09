#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <cstdlib>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class	Harl {

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

	int		Format(std::string level);

private:

	void	(Harl::*ft_ptr[4])(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
