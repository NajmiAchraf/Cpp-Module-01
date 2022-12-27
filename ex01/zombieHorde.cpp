#include "Zombie.hpp"

std::string	to_string(int n)
{
	std::string::size_type	i;
	std::string				str;
	char					tmp;

	i = 0;
	while (n > 0)
	{
		str += (n % 10) + '0';
		n /= 10;
		i++;
	}
	str += '\0';
	i = 0;
	while (i < str.length() / 2)
	{
		tmp = str[i];
		str[i] = str[str.length() - i - 1];
		str[str.length() - i - 1] = tmp;
		i++;
	}
	return (str);
}

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName(name + " " + to_string(i + 1));
	}
	return (horde);
}
