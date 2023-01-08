#include <iostream>
#include <cstdlib>

class	Harl {

public:

	Harl(void);
	~Harl(void);

	void		complain(std::string level);

private:

	void	(Harl::*ft_ptr[4])(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};
