#include "iter.hpp"

template<typename T>

void	printContent(T &arg)
{
	std::cout << "Value of content is = " << arg << std::endl;
}

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
		std::cout << STEELBLUE4 << "Testing with an array of int" << RESET << std::endl;
		std::cout << std::endl;
		int	array[] = {1, 2, 3};
		::iter(array, 3, &printContent);

	}
	if (arg == "2")
	{
		std::cout << YELLOW2 << "TEST #" << arg << RESET << std::endl;
		std::cout << YELLOW4 << "Testing with an array of strings" << RESET << std::endl;
		std::cout << std::endl;
		std::string	array[] = {"hey", "what's", "up?"};
		::iter(array, 3, &printContent);

	}
	if (arg == "3")
	{
		std::cout << SPRINGGREEN4 << "TEST #" << arg << RESET << std::endl;
		std::cout << SPRINGGREEN6 << "Testing with an array of floats" << RESET << std::endl;
		std::cout << std::endl;
		float	array[] = {3.1, 2.4, 1.5};
		::iter(array, 3, &printContent);
	}
	return 0;
}