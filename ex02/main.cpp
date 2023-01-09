#include <iostream>

int main(void) {
	std::string		string_variable = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string_variable;
	std::string&	stringREF = string_variable;

	std::cout << "The memory address of the string variable: " << &string_variable  << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << string_variable << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
