#include "Array.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)	if (argc != 2)
	{
		std::cout << "Usage : ./iter <number between 1 and "<< argv[1] << ">" << std::endl;
		return 0;
	}
	std::string arg(argv[1]);
	if (arg == "1")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing creating a array with default constructor" << RESET << std::endl;

		std::cout << "Displaying an array of int : " << std::endl;
		Array<int> a;
		std::cout << a << std::endl;

		std::cout << "Displaying an array of string : " << std::endl;
		Array<std::string> b;
		std::cout << b << std::endl;
	}
	if (arg == "2")
	{
		std::cout << STEELBLUE3 << "TEST #" << arg << RESET << std::endl;
		std::cout << STEELBLUE4 << "Testing creating a array with param1 constructor" << RESET << std::endl;

		std::cout << "Displaying an array of int : " << std::endl;
		Array<int> a(3);
		std::cout << a << std::endl;
	}
	return 0;
}