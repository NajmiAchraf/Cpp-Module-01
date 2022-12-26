#include <iostream>
#include <fstream>
#include <cstdlib>

static std::string	replacing(std::string line, std::string str1, std::string str2) {
	std::string::size_type	start = 0;
	std::string::size_type	n;

	while ((n = line.find(str1, start)) != std::string::npos) {
		line.erase(n, str1.length());
		line.insert(n, str2);
		start = n + str2.length();
	}
	return (line);
}

static void	error(std::string msg, std::string filename = "") {
	std::cerr << "ERROR : "<< msg << filename << std::endl;
	std::exit(EXIT_FAILURE);
}

int	main (int ac , char *av[]) {
	if (ac != 4 || av[2] == NULL || av[3] == NULL)
		error("Wrong Arguments");

	std::string	filename	= av[1];
	std::string str1		= av[2];
	std::string str2		= av[3];

	std::ifstream	infile(filename.data());
	if (!infile.is_open())
		error("Cannot Open File ", filename);

	std::ofstream	outfile(filename.append(".replace").data());
	if (!outfile.is_open()) {
		infile.close();
		error("Cannot Open File ", filename.append(".replace"));
	}
	while (true) {
		std::string	line;
		std::getline(infile, line);
		outfile << replacing(line, str1, str2);
		if (infile.eof())
			break;
		outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}
