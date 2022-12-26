#include <iostream>
#include <cstdlib>

enum levelFormat {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	EXTRA
};

class	Harl {

public:

	Harl(void);
	~Harl(void);

	void		complain(std::string level);

	static levelFormat	Format(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};
